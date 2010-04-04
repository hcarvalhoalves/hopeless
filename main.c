#include "defs.h"
#include "memory.h"
#include "module.h"
#include "source.h"
#include "error.h"
#ifdef unix
#include "plan9args.h"
#endif

#ifdef NLS
#include <locale.h>
#endif

#include "version.h"

global  Bool    restricted;     /* disable file I/O */
global  int     time_limit;     /* evaluation time limit in seconds */

global  const   char    *const  *cmd_args;

global  char **cmd_envs = NULL;
void create_envs(void);
void delete_envs(void);

global int
main(int argc, const char *const argv[])
{
        Bool    gen_listing;    /* generate a listing on stderr */
        const   char    *source_file;
        FILE    *src;
#ifdef RE_EDIT
        const   char    *script_file;

        script_file = NULL;
#endif
        source_file = NULL;
        gen_listing = restricted = FALSE;
        time_limit = 0;
#ifdef unix
        ARGBEGIN {
                case 'f': source_file = ARGF();
                when 'l': gen_listing = TRUE;
                when 'r': restricted = TRUE;
                when 't': time_limit = atoi(ARGF());
#ifdef RE_EDIT
                when 's': script_file = ARGF();
#endif
                when 'v': 
                        printf(APPNAME " " VERSION "\n");
                        return 1;
                        
                otherwise:
                        fprintf(stderr, "usage: %s -lr -f file -t nsecs\n",
                                argv0);
                        return 1;
        } ARGEND
        cmd_args = argv;
#else
        cmd_args = argv+1;
#endif

        if (source_file != NULL) {
                src = fopen(source_file, "r");
                if (src == NULL) {
                        fprintf(stderr, "%s: can't read file '%s'\n",
                                argv0, source_file);
                        return 1;
                }
        } else
                src = stdin;

        create_envs();
#ifdef NLS
        (void)setlocale (LC_ALL, "");
#endif
        init_memory();
        init_strings();
        init_lex();
        init_source(src, gen_listing);

#ifdef RE_EDIT
        if (script_file != NULL)
                set_script(script_file);        /* re-entry after an edit */
#endif

        mod_init();             /* begin standard module */
        preserve();
        (void)yyparse();        /* read commands from files and user */
        heap_stats();
        if (source_file != NULL)
                fclose(src);
        delete_envs();
        return 0;
}

#ifdef RE_EDIT
/*
 *      Restart Hope, reading from the script_file.
 *      The neatest way would be to just longjmp back to the start,
 *      but it's too much trouble to get the external data back into
 *      the right state, or to make sure the program doesn't depend on
 *      its initial state.  So, we just exec ourselves again, passing
 *      the script_file as an argument.
 */
global void
restart(const char *script_file)
{
        (void)execlp(argv0, argv0, "-s", script_file, (char *)0);
        error(FATALERR, "cannot restart");
}
#endif

void help(void)
{
  printf(APPNAME " " VERSION "\n");
  printf("<expression>;\n"); 
  printf("write <expression>;\n"); 
  printf("write <expression> to \"file\";\n"); 
  printf("display;\n"); 
  printf("save filename;\n");
  printf("exit;\n");
}

#define VARS_LN 11
#define VARS_SZ 20

void create_envs(void)
{
  char str[256],*po;
  int i,j;
  char vars[VARS_LN][VARS_SZ] = { "USER", "LANG", "HTTP_HOST", "HTTP_USER_AGENT", "HTTP_COOKIE",
       "HTTP_REFERER", "QUERY_STRING", "REMOTE_ADDR", "REMOTE_PORT", "REQUEST_METHOD", 
       "REQUEST_URI" };
  cmd_envs = (char**)malloc((VARS_LN+1)*sizeof(char*));
  j = 0;
  for(i=0;i<VARS_LN;i++)
  {
     po = getenv(vars[i]);
     if(po!=NULL)
     {
       sprintf(str,"%s=%s",vars[i],po);
       cmd_envs[j] = (char*)malloc(strlen(str)+1);
       strcpy(cmd_envs[j],str);
       j++;
     }
  }
  cmd_envs[j] = NULL;
}

void delete_envs(void)
{
  int i;
  if(cmd_envs==NULL) return;
  for(i=0;i<VARS_LN;i++)
  {
    if(cmd_envs[i]!=NULL) free(cmd_envs[i]);
  }
  free(cmd_envs);
}

/^%token[ 	]*BINARY/i\
%token  BIN_BASE
/^.*[:|].*BINARY.*[^}]$/ {
	: loop
	N
	/}$/!b loop
}
/BINARY/ {
	s/BINARY/LBINARY1/
	p
	s/^[a-z0-9_]*[ 	]*:/	|/
	s/LBINARY/RBINARY/
	p
	s/RBINARY1/LBINARY2/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY2/LBINARY3/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY3/LBINARY4/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY4/LBINARY5/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY5/LBINARY6/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY6/LBINARY7/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY7/LBINARY8/
	p
	s/LBINARY/RBINARY/
	p
	s/RBINARY8/LBINARY9/
	p
	s/LBINARY/RBINARY/
}

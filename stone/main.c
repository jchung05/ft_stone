#include <stdlib.h>
#include <stdio.h>

void stone(int);

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	stone(atoi(argv[1]));
	return (0);
}

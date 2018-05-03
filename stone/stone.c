#include <stdlib.h>
#include <stdio.h>

void	print_num(uint64_t n)
{
	if (n > 10)
		print_num(n / 10);
	printf("%llu ", n % 10);
}

void	stone(int height)
{
	uint64_t			space;
	uint64_t			tmp = 1;

	for (int line = 0; line < height; line++)
    {
		space = (height - line);
		for (uint64_t i = 0; i < space; i++)
			printf(" ");

		print_num(tmp);
        printf("\n");
		tmp *= 11;
    }
}

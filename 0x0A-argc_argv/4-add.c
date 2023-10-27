#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: arguments
 *@argv: argumnets
 *
 *Return: always 0
 */

int main(int argc, char **argv)
{
	int i, n, sun = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sun += n;
		}
	}
	printf("%d\n", sun);

	return (0);
}

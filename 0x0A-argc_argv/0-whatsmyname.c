#include <stdio.h>

/**
 *main - prints its name, followed by a new line
 *@argc: arguments count
 *@argv: arguments
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

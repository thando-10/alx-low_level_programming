#include <stdio.h>

/**
 *
 *main - this function will carry the instructions that will be executed

Return: this will return the value 0
*/

int main(void)
{
	int i;
	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - this function will carry all the instructions will be executed
 *
 * Return: this will return the value 0
 */

int main(void)
{
	char i;
	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

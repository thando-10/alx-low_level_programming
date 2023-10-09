#include <stdio.h>

/**
 * main - this function will carry all the instructions that will be executed
 *
 * Return: this will return the value 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

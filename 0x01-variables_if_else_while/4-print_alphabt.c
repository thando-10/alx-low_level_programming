#include <stdio.h>

/**
 * main - this function will carry all the intructions that will be executed 
 *
 * Return: this will return the value 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}

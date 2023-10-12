#include "main.h"

/**
 *print_line - this draws a straight line in the terminal
 *@n: number if times '_' will be printed
 *Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}

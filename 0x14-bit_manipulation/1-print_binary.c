#include "main.h"
#include <unistd.h>

/**
 *print_bi - print the binary representation
 *
 *@n: the decimal input
 *Return: void
 */

void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		printf('1');
	if ((n & 1) == 0)
		printf('0');
}

/**
 * print_binary - prints out binary
 *
 *@n: decimal to be converted
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		printf('0');
	else
	{
		print_bi(n);
	}
}

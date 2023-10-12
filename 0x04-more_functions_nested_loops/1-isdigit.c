#include "main.h"

/**
 * _isdigit - this will check for a digit from 0 to 9
 *@c: char to check
 *Return: returns 1 on success then returns 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

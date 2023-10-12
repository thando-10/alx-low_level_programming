#include "main.h"

/**
 * _isupper - this function checks for all characters that are uppercase
 * @c: parameter checks
 * Return: when succesful returns 1 on failure returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

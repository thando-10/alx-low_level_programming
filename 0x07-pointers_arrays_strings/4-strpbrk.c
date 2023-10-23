#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - function anme
 *@s: parameter 1
 *@accept: parameter 2
 *Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}

#include "main.h"

/**
 * _memset - function to fill an array with chsracters
 * @s: the string to be filled
 * @b: the character to fill into array
 * @n: the size to be filled with @b character
 * Return: the array after being filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}

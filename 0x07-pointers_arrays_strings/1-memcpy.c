#include "main.h"

/**
 * _memcpy - function to fill an array with chsracters
 * @dest: where to copy memory content to
 * @src: where to copy memory content from
 * @n: the size to data to be copied
 * Return: the content of dest after copy.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}

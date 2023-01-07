#include "main.h"

/**
 * _strcpy - pointer function to copy string from a source to destination
 * @src: where to copy the string from
 * @dest: where to copy string to
 * Return: the value of string in the destinstion
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


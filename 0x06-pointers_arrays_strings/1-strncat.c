#include "main.h"

/**
 * _strncat - function to concatenate string from a source to a destination
 * stating the size of data to concatenate  to the destination
 * @dest: pointer to the destination variable
 * @src: pointer to the source variable
 * @size: integer value specifying the size of data to concatenate
 * Return: the destination variable after concatenation
 */

char *_strncat(char *dest, char *src, int size)
{
	int i, j, des_len;

	j = 0;
	des_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		++des_len;

	while (src[j] != '\0' && j < size)
	{
		dest[des_len + j] = src[j];
		j++;
	}
	return (dest);
}

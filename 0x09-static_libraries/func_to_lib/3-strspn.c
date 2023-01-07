#include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 * @seg: segment to compare bytes from
 * @acc: string of bytes to compare with
 * Return: number of bytes
 */

unsigned int _strspn(char *seg, char *acc)
{
	unsigned int i, j;

	i = 0;
	while (seg[i] != '\0')
	{
		j = 0;
		while (acc[j] != '\0' && seg[i] != acc[j])
			j++;
		if (acc[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

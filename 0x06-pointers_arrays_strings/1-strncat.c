#include "main.h"

char *_strncat(char *dest, char *src, int size)
{
	int i, j, des_len;

	j = 0;
	des_len = 0;

	for (i = 0; dest[i] != '\0';i++)
		++des_len;

	while (src[j] != '\0' && j < size)
	{
		dest[des_len + j] = src[j];
		j++;
	}
	return (dest);
}

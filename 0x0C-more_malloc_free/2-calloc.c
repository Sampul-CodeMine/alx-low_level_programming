#include "main.h"

/**
 * _calloc - function that allocates memory to an array using malloc
 * @nmemb: number of memory for elements in the array
 * @size: the size of array elements
 * Return: NULL if fails or else returns the array pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int itr;
	char *ptr;

	itr = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);
	for (itr = 0; itr < size; itr++)
		ptr[itr] = 0;

	return (ptr);
}

#include "main.h"

/**
  * _calloc -  function to allocate memory for an array using malloc
  * @nmemb: number of elements in array to allocate
  * @size: the size of the elements in the array
  * Return: NULL if malloc fails or the ptr is NULL else the pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int itr;

	itr = 0;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	for (itr = 0; itr < size; itr++)
		ptr[itr] = 0;

	return (ptr);
}

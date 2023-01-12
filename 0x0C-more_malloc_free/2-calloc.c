#include "main.h"

/**
  * _calloc -  function to allocate memory for an array using malloc
  * @nmemb: number of elements in array to allocate
  * @size: the size of the elements in the array
  * Return: NULL if malloc fails or the ptr is NULL else the pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *chr;
	unsigned int itr;

	if (nmemb <= 0 || size <= 0)
		return (p);

	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);

	chr = (char *)p;
	for (itr = 0; itr < (nmemb * size); itr++)
		*(chr + itr) = 0;

	return (chr);
}

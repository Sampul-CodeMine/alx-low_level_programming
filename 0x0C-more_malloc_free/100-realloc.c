#include "main.h"

/**
  * _realloc - reallocates a memory block using malloc, realloc, and free
  * @ptr: pointer to the original memory block
  * @o_size: the old size of memory block
  * @n_size: the new size of memory block
  * Return: pointer to reallocated memory block
  */
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size)
{
	char *p, *castptr;
	unsigned int itr;

	if (ptr != NULL && n_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (n_size == o_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(n_size);
		return (p);
	}
	if (n_size > o_size)
	{
		p = malloc(n_size * sizeof(char));
		castptr = ptr;
		for (itr = 0; itr < o_size; itr++)
			p[itr] = castptr[itr];
		free(ptr);
		return (p);
	}
	return (ptr);
}

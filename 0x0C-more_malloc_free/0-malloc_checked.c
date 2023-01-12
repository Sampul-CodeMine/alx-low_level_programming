#include "main.h"

/**
 * malloc_checked - function to allocate dynamic memory using malloc
 * @byte_size: the size of the buffer to allocate
 * Return: the pointer to the memory
 */

void *malloc_checked(unsigned int byte_size)
{
	void *ptr;

	ptr = malloc(byte_size);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

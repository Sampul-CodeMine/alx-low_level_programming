#include "dog.h"

/**
  * free_dog - frees any memory allocated by dog.
  * @d: pointer to struct
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

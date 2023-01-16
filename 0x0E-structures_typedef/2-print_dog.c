#include "dog.h"

/**
 * print_dog - prints the struct dog and the
 * contents of its variables
 * @d: the name of the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if ((*d).owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

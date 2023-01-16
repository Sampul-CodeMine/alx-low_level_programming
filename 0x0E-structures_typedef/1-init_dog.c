#include "dog.h"

/**
 * init_dog - initializes the struct dog
 * @d: the name of the struct
 * @name: name variable in the struct dog
 * @age: age variable in the struct dog
 * @owner: owner variable in the steuct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

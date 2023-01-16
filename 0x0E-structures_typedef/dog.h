#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a structure to hold properties od a dog
 * @name: string variable for dog name
 * @age: float variable for the dogs age
 * @owner: string variable for dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);


#endif

#include "dog.h"

/**
  * new_dog - creates a new struct of type dog
  * @name: struct argument name of dog
  * @age: struct argument age of dog
  * @owner: struct argument owner of dog
  * Return: returns pointer to buffer of datatype dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen = 0;
	int ownerlen = 0;
	int itr = 0;
	dog_t *bingo;

	for (namelen = 0; name[namelen] != '\0'; namelen++)
	{}
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
	{}
	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(namelen * sizeof(bingo->name));
	if (bingo == NULL)
		return (NULL);
	for (itr = 0; itr < namelen; itr++)
		bingo->name[itr] = name[itr];

	bingo->age = age;

	bingo->owner = malloc(ownerlen * sizeof(bingo->owner));
	if (bingo == NULL)
		return (NULL);
	for (itr = 0; itr < ownerlen; itr++)
		bingo->owner[itr] = owner[itr];
	return (bingo);
}




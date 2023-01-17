#include "dog.h"

/**
  * new_dog - new dog
  * @name: argument for name of dog
  * @age: argument for age of dog
  * @owner: argument for owner of dog
  * Return: newdog
  */

dog_t *new_dog(char *name, float age, char *owner)
{

	int nmlen = 0, ownrlen = 0, itr;
	dog_t *bingo;

	while (name[nmlen] != '\0')
		nmlen++;
	while (owner[ownrlen] != '\0')
		ownrlen++;
	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = malloc(nmlen * sizeof(bingo->name));
	if (bingo->name == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (itr = 0; itr <= nmlen; itr++)
		bingo->name[itr] = name[itr];
	bingo->age = age;
	bingo->owner = malloc(ownrlen * sizeof(bingo->owner));
	if (bingo->owner == NULL)
	{
		free(bingo->owner);
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (itr = 0; itr <= ownrlen; itr++)
		bingo->owner[itr] = owner[itr];
	return (bingo);
}

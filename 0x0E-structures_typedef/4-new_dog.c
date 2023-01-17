#include "dog.h"

/**
  * strcpy - Copy a string from source to destination
  * @dest: Destination value
  * @src: Source value
  * Return: the pointer to dest
  */

char *str_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}


/**
  * strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */

int str_len(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	return (c);
}

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int name_l = 0, own_l = 0;

	name_l = str_len(name) + 1;
	own_l = str_len(owner) + 1;
	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * name_l);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * own_l);

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = str_cpy(n_dog->name, name);
	n_dog->owner = str_cpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}

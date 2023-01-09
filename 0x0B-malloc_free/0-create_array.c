#include "main.h"

/**
 * create_array - function to create a char array and initialize with
 * a special character
 * @size: the size of the array to create
 * @chr: the character with which to initialize the array
 * Return: NULL if the size of the array is 0
 */

char *create_array(unsigned int size, char chr)
{
	unsigned int count;
	char *arrPtr;

	if (size > 0)
	{
		arrPtr = malloc(sizeof(char) * size);
		if (arrPtr == NULL)
			return (NULL);
	}
	else
		return (NULL);

	for (count = 0; count < size; count++)
		arrPtr[count] = chr;

	return (arrPtr);
}

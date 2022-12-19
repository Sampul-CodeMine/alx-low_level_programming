#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: the steing to find its length
 * Return: Length of the string @str
 */

int _strlen(char *str)
{
	int counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

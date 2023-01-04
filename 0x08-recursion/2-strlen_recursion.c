#include "main.h"

/**
  * _strlen_recursion - recursively print the length of a string
  * @str: the string to be get its length recursively
  * Return: the length (integer)
  */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);

	str++;
	return (_strlen_recursion(str) + 1);
}

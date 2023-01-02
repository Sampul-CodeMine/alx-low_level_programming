#include "main.h"

/**
  * _strchr - function to locate a character in string
  * @str: the source string from which to find character
  * @chr: the character to look for
  * Return: the string found
  */

char *_strchr(char *str, char chr)
{
	while (str != NULL)
	{
		if (*str == chr)
			return (str);
		else if (*(str + 1) == chr)
			return (str + 1);
		str++;
	}
	return (str + 1);
}

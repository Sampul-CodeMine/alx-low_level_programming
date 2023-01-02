#include "main.h"

/**
  * _strchr - function to locate a character in string
  * @str: the source string from which to find character
  * @chr: the character to look for
  * Return: the string found
  */

char *_strchr(char *str, char chr)
{
	int a = 0, b;

	while (str[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (chr == str[b])
		{
			str += b;
			return (str);
		}
	}
	return (NULL);
}

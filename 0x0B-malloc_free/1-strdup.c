#include "main.h"

/**
  * _strdup - function to duplicate a string or copy string into a new buffer
  * @str: the string that should be duplicated
  * Return: If successful, the duplicated string else NULL
  */

char *_strdup(char *str)
{
	int str_len, itr;
	char *ptr;

	str_len = 1;

	if (str == NULL)
		return (NULL);

	while (str[str_len])
		str_len++;

	if (str_len < 1)
		return (NULL);

	ptr = malloc((sizeof(char) * str_len) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		for (itr = 0; itr < str_len; itr++)
			ptr[itr] = str[itr];
		ptr[itr] = '\0';
		return (ptr);
	}
}

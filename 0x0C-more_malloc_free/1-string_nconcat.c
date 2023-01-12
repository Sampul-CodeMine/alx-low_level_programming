#include "main.h"

/**
  * string_nconcat - function to add two words of any length together
  * @str_1: the first string to be concatenated
  * @str_2: the second string to be concatenated
  * @size: number of to truncate
  * Return: the concatenated strings
  */

char *string_nconcat(char *str_1, char *str_2, unsigned int size)
{
	unsigned int strlen1; /* length of the first string */
	unsigned int strlen2; /* length of the second string */
	unsigned int itr; /* iterator */
	unsigned int full_size; /* buffer size for the full string */
	char *new_str; /* the new string to be created */

	if (str_1 == NULL)
		str_1 = "";
	if (str_2 == NULL)
		str_2 = "";
	for (strlen1 = 0; str_1[strlen1]; strlen1++)
	{}
	for (strlen2 = 0; str_2[strlen2]; strlen2++)
	{}
	if (strlen2 > size)
		strlen2 = size;

	full_size = strlen1 + strlen2 + 1;

	new_str = malloc(sizeof(char) * full_size);

	if (new_str == NULL)
		return (NULL);

	for (itr = 0; itr < (full_size - 1); itr++)
	{
		if (itr < strlen1)
			new_str[itr] = str_1[itr];
		else
			new_str[itr] = str_2[itr - strlen1];
	}
	new_str[full_size] = '\0';

	return (new_str);
}

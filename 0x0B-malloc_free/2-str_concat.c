#include "main.h"

/**
  * str_concat - function to add two words of any length together
  * @str_1: the first string to be concatenated
  * @str_2: the second string to be concatenated
  * Return: the concatenated strings
  */

char *str_concat(char *str_1, char *str_2)
{
	char *ptr;
	int str_1_len, str_2_len, itr;

	if (str_1 == NULL)
		str_1 = "";
	if (str_2 == NULL)
		str_2 = "";

	while (str_1[str_1_len])
		str_1_len++;

	while (str_2[str_2_len])
		str_2_len++;

	ptr = malloc(sizeof(char) * (str_1_len + str_2_len + 1));

	if (ptr == NULL)
		return (NULL);
	for (itr = 0; itr < (str_1_len + str_2_len + 1); itr++)
		if (itr < str_1_len)
			ptr[itr] = str_1[itr];
		else
			ptr[itr] = str_2[itr - str_1_len];

	return (ptr);
}

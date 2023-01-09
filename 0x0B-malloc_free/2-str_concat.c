#include "main.h"

/**
  * str_concat - function to add two words of any length together
  * @str_1: the first string to be concatenated
  * @str_2: the second string to be concatenated
  * Return: the concatenated strings
  */

char *str_concat(char *str_1, char *str_2)
{
	int strlen1 = 0, strlen2 = 0;
	int itr = 0, fulllen = 0;
	char *str;

	if (str_1 == NULL)
		str_1 = "";

	if (str_2 == NULL)
		str_2 = "";

	while (str_1[strlen1])
		strlen1++;

	while (str_2[strlen2])
		strlen2++;

	fulllen = strlen1 + strlen;
	str = malloc((sizeof(char) * fulllen) + 1);

	if (str == NULL)
		return (NULL);

	strlen2 = 0;

	while (itr < fulllen)
	{
		if (itr <= strlen1)
			str[itr] = str_1[itr];

		if (itr >= strlen1)
		{
			str[itr] = str[strlen2];
			strlen2++;
		}

		k++;
	}

	str[itr] = '\0';
	return (str);
}

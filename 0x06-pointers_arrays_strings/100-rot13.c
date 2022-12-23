#include "main.h"

/**
* rot13 - function to encode strings 13 characters
* @str: pointer to the string to encode
* Return: ...
*/

char *rot13(char *str)
{
	int itr = 0;

	while (str[itr])
	{
		while ((str[itr] >= 'a' && str[itr] <= 'z') || (str[itr] >= 'A' && str[itr] <= 'Z'))
		{
			if ((str[itr] > 'm' && str[itr] <= 'z') || (str[itr] > 'M' && str[itr] <= 'Z'))
			{
				str[itr] -= 13;
				break;
			}

			str[itr] += 13;
			break;
		}

		itr++;
	}

	return (str);
}
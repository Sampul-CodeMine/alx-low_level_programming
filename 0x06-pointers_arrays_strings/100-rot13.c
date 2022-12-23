#include "main.h"

/**
* rot13 - function to encode strings 13 characters
* @s: pointer to the string to encode
* Return: ...
*/

char *rot13(char *s)
{
	int itr = 0;

	while (s[itr])
	{
		while ((s[itr] >= 'a' && s[itr] <= 'z') || (s[itr] >= 'A' && s[itr] <= 'Z'))
		{
			if ((s[itr] > 'm' && s[itr] <= 'z') || (s[itr] > 'M' && s[itr] <= 'Z'))
			{
				s[itr] -= 13;
				break;
			}

			s[itr] += 13;
			break;
		}

		itr++;
	}
	return (s);
}

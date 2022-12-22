#include "main.h"

/**
 * string_toupper -function to converts all lowercased
 * letters of a string to uppercase.
 * @chr: pointer to the string to convert
 * Return: the converted string.
 */
char *string_toupper(char *chr)
{
	int itr = 0;

	while (chr[itr] != '\0' && chr[itr])
	{
		if (chr[itr] >= 'a' && chr[itr] <= 'z')
                        chr[itr] -= 32;
                itr++;
        }
        return (chr);
}

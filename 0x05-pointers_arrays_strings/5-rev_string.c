#include "main.h"

/**
 * rev_string - function to reverse the order of a string and print out
 * @str: String for which to reverse its order
 * Return: Nothing
 */

void rev_string(char *str)
{
	int counts, reverse;
	char chr;

	for (counts  = '\0'; str[counts] != 0; counts++)
	{
	}
	reverse = 0;
	for (counts = (counts - 1); reverse < counts; reverse++)
	{
		chr = str[counts];
		str[counts] = str[reverse];
		str[reverse] = chr;
		counts--;
	}
}

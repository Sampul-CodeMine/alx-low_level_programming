#include "main.h"

/**
 * _strcmp - compares two strings, returns the difference
 * @s_one: first string to be compared
 * @s_two: second string to compared
 * Return: the difference between both strings
 */

int _strcmp(char *s_one, char *s_two)
{
	int i, count = 0;

	for (i = 0; s_two[i] != '\0' && s_two[i] != '\0' && s_one[i] == s_two[i]; i++)
		++count;

	return (s_one[count] - s_two[count]);
}

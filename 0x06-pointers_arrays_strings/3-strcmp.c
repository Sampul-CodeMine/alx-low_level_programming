#include "main.h"

/**
 * _strcmp - compares two strings, returns the difference
 * @source_one: first string to be compared
 * @source_two: second string to compared
 * Return: the difference between both strings
 */

int _strcmp(char *source_one, char *source_two)
{
	int itr, count = 0;
	for (itr = 0; (source_two[itr] != '\0' && source_two[itr] != '\0') && source_one[itr] == source_two[itr]; itr++)
		++count;

	return (source_one[count] - source_two[count]);
}

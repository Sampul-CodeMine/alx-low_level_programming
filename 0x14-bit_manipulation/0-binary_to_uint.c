#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @bin: the binary streamm converted into integer
 * Return: converted number else 0 if the word contains a character not 0 or 1
 */

unsigned int binary_to_uint(const char *bin)
{
	unsigned int strlen = 0;
	unsigned int itr = 0, total = 0, i = 0;

	while (bin[itr])
		itr++;

	strlen = itr;

	if (bin == NULL)
		return (0);

	while (strlen--)
	{
		if (bin[strlen] != 48 && bin[strlen] != 49)
			return (0);
		if (bin[strlen] == 49)
			total = total  + (1 << i);
		i++;
	}
	return (total);
}
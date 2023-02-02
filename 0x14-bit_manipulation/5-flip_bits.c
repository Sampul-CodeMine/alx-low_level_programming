#include "main.h"

/**
 * flip_bits - calculates the number of bits needed
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}

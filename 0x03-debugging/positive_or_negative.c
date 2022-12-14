#include <stdio.h>

/**
 * postive_or_negative - Function to check if a number is negative or positive
 * @n: positive or negative integer number to test for sign.
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
}

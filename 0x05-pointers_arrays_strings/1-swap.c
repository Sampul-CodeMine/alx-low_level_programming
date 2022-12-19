#include "main.h"

/**
 * swap_int - function to swap values between two
 * integer variables
 * @num_one: pointer to address of first variable
 * @num_two: pointer to address of second variable
 * Return: Nothing
 */

void swap_int(int *num_one, int *num_two)
{
	int tmp;

	tmp = *num_one;
	*num_one = *num_two;
	*num_two = tmp;
}

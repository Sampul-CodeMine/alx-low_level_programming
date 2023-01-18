#include "function_pointers.h"

/**
 * int_index - a program that searches an array for integer elements
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the function pointer to be used to compare values and return 0.
 * Return: -1 if no element found or size less than 0 else 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (itr = 0; itr < size; itr++)
		{
			if (cmp(array[itr]))
				return (itr);
		}
	}
	return (-1);
}

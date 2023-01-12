#include "main.h"

/**
 * array_range - function to create an array of integers with its value
 * containing min and max in ascending order
 * @min: minimum value
 * @max: maximum value
 * Return: ponter to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr, itr = 0, size = 0;

	if (min > max)
		return (NULL);
	size = ((max - min) + 1);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[itr] = min;
		itr++;
		min++;
	}

	return (arr);
}

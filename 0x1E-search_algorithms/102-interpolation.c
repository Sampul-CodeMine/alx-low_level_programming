#include "search_algos.h"

/**
 * get_position - function to get the index of the search value
 * @arr: the array with integer elements
 * @value: the value to search for
 * @low: the lowest index from the array
 * @high: the highest index from the array
 * Return: the index of the value from the array
 */

int get_position(int *arr, int value, int low, int high)
{
	int a, b, c, pos;

	a = (value - arr[low]);
	b = (arr[high] - arr[low]);
	c = (double)(high - low);
	pos = low + ((c / b) * a);
	return (pos);
}

/**
 * interpolation_search - function to perform interpolation search on an array
 * of integers
 * @array: the arry with integer elements
 * @size: the size of the array
 * @value: the value to search for
 * Return: Returns the index if found else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1), pos;

	if (array == NULL || !array)
		return (-1);

	while (low < high)
	{
		pos = get_position(array, value, low, high);
		if (pos > (size - 1))
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (pos == 0 && array[pos] > value)
			return (-1);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	return (-1);
}

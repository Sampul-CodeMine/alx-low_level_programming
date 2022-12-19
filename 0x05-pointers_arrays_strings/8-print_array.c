#include "main.h"

/**
 * print_array - function to print an array and its element
 * @arr: the pointer to the array element
 * @size: the size of the array element.
 * Return: Nothing
 */

void print_array(int *arr, int size)
{
	int i, lim;

	i = 0;
	lim = size - 1;
	while (i < size)
	{
		if (i != lim)
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[i]);
		i++;
	}
	putchar('\n');
}

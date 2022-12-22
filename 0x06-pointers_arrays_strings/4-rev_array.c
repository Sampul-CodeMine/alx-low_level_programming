#include "main.h"

/**
  * reverse_array - function to reverse the order of an array and print out
  * @arr: an integer array
  * @len: length of array to reverse
  * Return: Nothing
  */

void reverse_array(int *arr, int len)
{
	int *ptr, itr, temp, x;

	ptr = arr;

	for (itr = 1; itr < len; itr++)
		ptr++;

	for (x = 0; x < (itr / 2); x++)
	{
		temp = arr[x];
		a[x] = *ptr;
		*ptr = temp;
		ptr--;
	}
}

#include "function_pointers.h"

/**
 * array_iterator - a function that exectutes another function given as 
 * a parameter on each element of an array
 * @array: the array on which to effect change on its element
 * @size: the size of the array
 * @action: the function to execute on the element of array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t itr;

	if (array != NULL)
	{
		if ( size > 0)
		{
			if (action != 0)
			{
				for (itr = 0; itr < size; itr++)
					action(array[itr]);
			}
		}
	}
}

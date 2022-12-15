#include "main.h"

/**
  * print_square - Function to print squares
  * @size: Specifies the sides and size of the square
  * Return: Nothing
  */

void print_square(int size)
{
	int f_iter, s_iter;

	if (size > 0)
	{
		for (f_iter = 1; f_iter <= size; f_iter++)
		{
			for (s_iter = 1; s_iter <= size; s_iter++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

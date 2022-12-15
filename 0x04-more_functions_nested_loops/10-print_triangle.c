#include "main.h"

/**
  * print_triangle - function to print triangle according to specified size
  * @size: the size of the triangle
  * Return: Nothing
  */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b >= 1; b--)
			{
				if (a < b)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

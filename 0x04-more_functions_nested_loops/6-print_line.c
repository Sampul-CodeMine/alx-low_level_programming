#include "main.h"

/**
 * print_line - function to draw lines as per n characters
 * @num: Number of dots or line to draw
 * Return: Nothing
 */

void print_line(int num)
{
	int itr;

	if (num > 0)
	{
		for (itr = 0; itr < num; itr++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

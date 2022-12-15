#include "main.h"

/**
  * print_diagonal - Function to print diagonal lines on the screen.
  * @num: Specifies the number of lines to print
  * Return: Nothing
  */

void print_diagonal(int num)
{
	/* f_iter = first_iterator, s_iter = second_iterator */
	int f_iter, s_iter;

	if (num > 0)
	{
		for (f_iter = 1; f_iter <= num; f_iter++)
		{
			for (s_iter = 1; s_iter <= f_iter; s_iter++)
			{
				if (s_iter != 1)
					_putchar(' ');
				if (s_iter == f_iter)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

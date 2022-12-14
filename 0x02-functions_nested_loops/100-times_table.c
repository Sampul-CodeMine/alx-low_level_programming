#include "main.h"

/**
  * print_times_table - function to print out the multiplication table
  * @num: numeric value to serve as a boundary for multiplication table
  * Returns: Nothing
  */

void print_times_table(int num)
{
	int iter1, iter2;
	int product = 0;

	if (num == 0)
		_putchar('0');
	else if (num >= 1 && num <= 15)
	{
		for (iter1 = 0; iter1 <= num; iter1++)
		{
			for (iter2 = 0; iter2 <= num; iter2++)
			{
				product = iter1 *  iter2;
				if (iter2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (product < 10 && iter2 != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100 && iter2 != 0)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
					_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

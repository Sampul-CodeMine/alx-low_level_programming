#include "main.h"
/**
  * print_times_table - function to print out the multiplication table
  * @num: numeric value to serve as a boundary for multiplication table
  * Returns: Nothing
  */
void print_times_table(int num)
{
	int iter1, iter2, product = 0;

	if (num >= 0 && num <= 15)
	{
		for (iter1 = 0; iter1 <= num; iter1++)
		{
			_putchar('0');
			for (iter2 = 1; iter2 <= num; iter2++)
			{
				product = iter1 *  iter2;
				_putchar(',');
				_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

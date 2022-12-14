#include "main.h"

/**
  * times_table - function to print out the multiplication table.
  * Returns: Nothing
  */

void times_table(void)
{
	int num = 9;
	int iter1, iter2;
	int product = 0;

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
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (product < 10 && iter2 != 0)
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

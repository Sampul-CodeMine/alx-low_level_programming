#include "main.h"

/**
 * more_numbers - function to repeatedly print 0 through 14 ten times
 * Return: Nothing
 */

void more_numbers(void)
{
	int counts = 0, iter = 0;
	while (counts < 10)
	{
		while (iter <= 14)
		{
			if (iter >= 10)
				_putchar((iter / 10) + '0');
			_putchar((iter % 10) + '0');
			iter++;
		}
		_putchar('\n');
		iter = 0;
		counts++;
	}
}

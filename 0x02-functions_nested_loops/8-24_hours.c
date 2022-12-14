#include "main.h"

/**
  * jack_bauer - Function to get events within 24hours capturing every minute
  * Return: Nothing
  */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			else if (hours >= 10)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
			}
			if (minutes < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minutes + '0');
			}
			else if (minutes >= 10)
			{
				_putchar(':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

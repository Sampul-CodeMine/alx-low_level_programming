#include "main.h"
/**
 * print_number - prints a number preserving its signs
 * @num: the number to preserve and print
 * Return: Nothing
 */

void print_number(int num)
{
	long len, res, i, temp, expo;

	res = num;
	expo = len =  1;

	/*Check if the number is negative */
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

	for (i = 1; i < len; i++)
		expo *= 10;

	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(res % 10 + '0');
}

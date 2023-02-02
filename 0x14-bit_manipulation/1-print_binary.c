#include "main.h"

/**
 * _shifter - recursive function to get the binary rep of a decimal number
 * @num: the number to be converted into binary
 * @flag: flag for character checker
 * Return: Nothing
 */

void _shifter(unsigned long int num, int flag)
{
	if (num == 0)
		return;
	if (flag == 1)
	{
		_putchar('0');
		return;
	}

	_shifter(num >> 1, flag);

	if ((num & 1) == 0)
		_putchar('0');
	else if ((num & 1) == 1)
		_putchar('1');
}

/**
 * print_binary - function to print the binary form of a decimal number
 * @num: the number to be converted into binary
 * Return: Nothing
 */

void print_binary(unsigned long int num)
{
	if (num == 0)
		_shifter(num, 1);
	else
		_shifter(num, 0);
}

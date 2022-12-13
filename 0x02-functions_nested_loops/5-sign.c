#include "main.h"

/**
  * print_sign - Function to print the sign of a number
  * @num: numeric value to print its sign
  * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit
  */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}

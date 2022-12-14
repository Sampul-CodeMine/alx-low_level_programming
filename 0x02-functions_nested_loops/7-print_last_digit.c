#include "main.h"

/**
  * print_last_digit - Function to return last digit from a numeric input
  * @num: numeric value to return its absolute value
  * Return: value of num
  */

int print_last_digit(int num)
{
	int holder;

	if (num < 0)
		num = -(num);
	holder = num % 10;
	if (holder < 0)
		holder = -(holder);
	_putchar(holder + '0');
	return (holder);
}

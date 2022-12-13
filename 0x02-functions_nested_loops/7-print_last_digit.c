#include "main.h"

/**
  * print_last_digit - Function to return last digit from a numeric input
  * @num: numeric value to return its absolute value
  * Return: value of num
  */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	_putchar((num % 10) + '0');
	return (num % 10);
}

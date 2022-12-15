#include <stdio.h>
#include "main.h"
/**
 * print_number - prints a number preserving its signs
 * @num: the integer number to preserve and print
 * Return: Nothing
 */

void print_number(int num)
{
	unsigned int temp;

	temp = num;
	/*Check if the number is negative */
	if (num < 0)
	{
		num *= -1;
		temp = num;
		_putchar('-');
	}

	temp /= 10;
	if (temp != 0)
		/* Recursive function */
		print_number(temp);
	_putchar((unsigned int) num % 10 + '0');
}

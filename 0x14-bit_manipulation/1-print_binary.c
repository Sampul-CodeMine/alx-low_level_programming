#include "main.h"

/**
 * _shifter - prints the character
 * @n: the number to convert
 * Return: Nothing
 */

void _shifter(unsigned long int n)
{
	if (n < 1)
		return;

	_shifter(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to representing in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_shifter(n);
}

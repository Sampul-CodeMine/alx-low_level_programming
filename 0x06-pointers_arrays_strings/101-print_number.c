#include "main.h"

/**
* print_number - prints out signed and unsigned integer (putchar)
* @num: Number to prints
* Return: Nothing
*/

void print_number(int num)
{
	unsigned int x;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	x = num;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
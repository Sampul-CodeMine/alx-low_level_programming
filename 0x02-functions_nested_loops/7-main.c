#include "main.h"
#include <limits.h>

/**
  * main - Entry Point
  * Return: Always 0 (success)
  */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

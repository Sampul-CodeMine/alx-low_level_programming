#include "main.h"

/**
  * _print_rev_recursion - recursively print the reverse of a string
  * @str: the string to be printed in reverse recursively
  * Return: Nothing
  */

void _print_rev_recursion(char *str)
{
	if (*str == '\0')
		return;

	_print_rev_recursion(str + 1);
	_putchar(*str);
}

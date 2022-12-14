#include "main.h"

/**
  * _puts_recursion - function to recursively print a string literal
  * @str: the string to be printed recursively
  * Return: Nothing
  */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	_puts_recursion(str + 1);
}

#include "main.h"

/**
 * print_rev - function to print a string in reverse form.
 * @str: pointer to a string variable
 * Return: Nothing
 */

void print_rev(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	for (counter -= 1; counter >= 0; counter--)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - function to display the second half of a string
 * @str: string to display its other hslf
 * Return: Nothing
 */

void puts_half(char *str)
{
	int itr, len;

	itr = 0;
	while (str[itr] != '\0')
		itr++;

	if (itr % 2 == 0)
		len = itr / 2;
	else
		len = (itr + 1) / 2;
	while (len < itr)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

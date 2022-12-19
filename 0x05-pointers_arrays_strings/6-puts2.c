#include "main.h"

/**
 * puts2 - function to return half a string
 * @str: string for which to retun hslf its size
 * Return: Nothing.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

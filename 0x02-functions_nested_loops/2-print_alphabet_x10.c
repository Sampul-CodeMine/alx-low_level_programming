#include "main.h"

/**
  * print_alphabet_x10 - This function prints the alphabets(10)x.
  * Return: Empty/Nothing
  */
void print_alphabet_x10(void)
{
	char chr;
	int itr;

	for (itr = 0; itr < 10; itr++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}

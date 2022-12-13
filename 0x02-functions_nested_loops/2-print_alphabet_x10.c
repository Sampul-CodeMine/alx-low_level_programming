#include "main.h"

/**
  * print_alphabet_x10 - This function prints the English alphabets ten (10) times.
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

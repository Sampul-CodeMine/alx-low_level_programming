#include "main.h"

/**
  * print_most_numbers - Function to print out natural numbers from 0 to 9
  * skipping number 2 and 4
  *
  * Return: Nothing
  */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		putchar(num);
	}
	putchar('\n');
}

#include "main.h"

/**
  * print_numbers - Function to print out natural numbers from 0 to 9
  * Return: Nothing
  */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
}

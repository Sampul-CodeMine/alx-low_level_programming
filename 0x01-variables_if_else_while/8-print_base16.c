#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program to print numbers to the base of 16 (Hexadecimal) */

	char alphabet;
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}

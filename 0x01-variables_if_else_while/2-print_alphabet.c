#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program to print alphabets from a - z in small caps using putchar */

	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	printf("\n");
	return (0);
}

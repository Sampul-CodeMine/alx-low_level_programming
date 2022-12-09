#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program to print alphabets from z- a using putchar */

	int alphabet;

	for (alphabet = ; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}

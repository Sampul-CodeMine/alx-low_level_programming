#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program to print combo numbers  */

	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		putchar((nums % 10) + '0');
		if (nums == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

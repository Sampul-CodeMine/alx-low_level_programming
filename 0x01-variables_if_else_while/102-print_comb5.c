#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program to print all possible combo of 2-digit numbers  */

	int iter1, iter2;

	for (iter1 = 0; iter1 < 99; iter1++)
	{
		for (iter2 = (iter1 + 1); iter2 < 100; iter2++)
		{
			putchar((iter1 / 10) + '0');
			putchar((iter1 % 10) + '0');
			putchar(' ');
			putchar((iter2 / 10) + '0');
			putchar((iter2 % 10) + '0');
			if (iter1 == 98 && iter2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

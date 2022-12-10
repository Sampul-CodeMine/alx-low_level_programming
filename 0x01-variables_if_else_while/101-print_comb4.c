#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program that prints all possible different combinations of three digits.gram to print possible combo of 2-digit numbers  */

	int iter1, iter2, iter3;

	for (iter1 = 0; iter1 < 8; iter1++)
	{
		for (iter2 = (iter1 + 1); iter2 < 9; iter2++)
		{
			for (iter3 = (iter2 + 1); iter3 < 10; iter3++)
			{
				putchar((iter1 % 10) + '0');
				putchar((iter2 % 10) + '0');
				putchar((iter3 % 10) + '0');
				if (iter1 == 7 && iter2 == 8 && iter3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

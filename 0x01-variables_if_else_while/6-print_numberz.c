#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	/* Program to print single digits from 0 - 9 using putchar */

	int nums;

	for (nums = '0'; nums <= '9'; nums++)
		putchar(nums);
	printf("\n");
	return (0);
}

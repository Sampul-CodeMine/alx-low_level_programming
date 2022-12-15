#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	long int number = 612852475143;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
			number /= i;
	}
	printf("%li\n", number);
	return (0);
}

#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int itr, sum;

	for (itr = 1; itr < 1024; itr++)
		if (itr % 3 == 0 || itr % 5 == 0)
			sum += itr;
	printf("%d\n", sum);
	return (0);
}

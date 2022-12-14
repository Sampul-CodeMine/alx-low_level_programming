#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	long iterator, first_val, second_val, container, total;

	first_val = 0;
	second_val = 1;
	total = 0;
	for (iterator = 0; iterator < 50; iterator++)
	{
		container = first_val + second_val;
		first_val = second_val;
		second_val = container;
		if (container % 2 == 0 && container < 4000000)
			total += container;
	}
	printf("%lu\n", total);
	return (0);
}

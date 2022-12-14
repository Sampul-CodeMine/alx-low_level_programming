#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	long int iterator, first_val, second_val, container;
	
	first_val = 0;
	second_val = 1;
	for (iterator = 0; iterator < 50; iterator++)
	{
		container = first_val + second_val;
		first_val = second_val;
		second_val = container;
		printf("%lu", container);
		if (iterator == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}

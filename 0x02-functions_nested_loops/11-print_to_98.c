#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - Function to print from any number to the value of 98
  * @num: an integer value either positive or negative
  * Return: Nothing
  */

void print_to_98(int num)
{
	int i;
	int init = 98;

	if (num < init)
	{
		for (i = num; i <= init; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (num > init )
	{
		for (i = num; i >= init; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (num == init)
	{
		printf("%d\n", num);
	}
}

#include <stdio.h>
#include "main.h"

/**
  * times_table - function to print out the multiplication table.
  * Returns: Nothing
  */

void times_table(void)
{
	int num = 9;
	int iter1, iter2;
	int product = 0;

	for (iter1 = 0; iter1 <= num; iter1++)
	{
		for (iter2 = 0; iter2 <= num; iter2++)
		{
			product = iter1 * iter2;
			if (iter2 < num)
				printf("%d,  ", product);
			else
				printf("%d", product);
		}
		printf("\n");
	}
}

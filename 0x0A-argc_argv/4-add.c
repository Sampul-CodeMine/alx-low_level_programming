#include "main.h"

/**
 * main - Program entry point: find the sum of numbers infinitely.
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	int counter;
	unsigned int iter, total = 0;
	char *current;

	if (argc > 1)
	{
		for (counter = 1; counter < argc; counter++)
		{
			current = argv[counter];
			for (iter = 0; iter < strlen(current); iter++)
			{
				if (current[iter] >= 48 && current[iter] <= 57)
				{
					total += atoi(current);
					current++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

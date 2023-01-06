#include "main.h"

/**
 * main - Program entry point: find the sum of numbers infinitely.
 * @argc: counts the number of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	int total, c, i;
	unsigned int itr;

	total = 0;
	for (c = 1; c <= argc; c++)
	{
		for (itr = 0; argv[c] != NULL && itr < strlen(argv[c]); itr++)
		{
			if (isdigit(argv[c][itr]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		total += atoi(argv[i]);
	printf("%d\n", total);

	return (0);
}

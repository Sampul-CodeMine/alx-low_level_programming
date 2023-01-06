#include "main.h"

int digit_checker(int, int, unsigned int, char *[]);

/**
 * main - Program entry point: pays back change for coin
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned int cents = 0;
	int coins = 0;

	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (digit_checker(argc, 1, 0, argv) == 0)
		{
			cents = atoi(argv[1]);
			for ( ; cents >= 25; coins++, cents -= 25)
				;
			for ( ; cents >= 10; coins++, cents -= 10)
				;
			for ( ; cents >= 5; coins++, cents -= 5)
				;
			for ( ; cents >= 2; coins++, cents -= 2)
				;
			for ( ; cents >= 1; coins++, cents--)
				;
			printf("%d\n", coins);
		}
	}
	else
		printf("Error\n");
	return (0);
}

/**
 * digit_checker - checks for valid input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int digit_checker(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != NULL && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}

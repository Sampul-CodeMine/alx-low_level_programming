#include "main.h"

/**
 * main - check the code
 * @ac: number of arguments passed
 * @av: pointer to the arguments values passed on the CLI
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);

	return (0);
}

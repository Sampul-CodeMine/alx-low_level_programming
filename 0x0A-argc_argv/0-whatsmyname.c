#include "main.h"

/**
 * main - Program entry point: get the name of a program.
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/* cast the int count to empty or null */
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

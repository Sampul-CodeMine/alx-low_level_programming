#include "main.h"

/**
 * main - Program entry point
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	(void) argc;/* cast the int count to empty or null */
	printf("%s\n", argv[0]);

	return (0);
}
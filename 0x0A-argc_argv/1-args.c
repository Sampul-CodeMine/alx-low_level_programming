#include "main.h"

/**
 * main - Program entry point
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: an integer
 */

int main(int argc, char *argv[])
{        
        (void) argv;
        printf("%d\n", (argc - 1));

        return (0);
}
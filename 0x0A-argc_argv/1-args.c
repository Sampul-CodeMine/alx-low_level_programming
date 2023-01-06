#include "main.h"

/**
 * main - Program entry point: prints the number of arguments passed
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{        
        (void) argv;
        
        printf("%d\n", (argc - 1));
        
        return (0);
}
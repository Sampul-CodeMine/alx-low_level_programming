#include "main.h"

/**
 * main - Program entry point: prints the arguments passed on different lines.
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: an integer
 */

int main(int argc, char *argv[])
{
        int counter;
        
        counter = 0;
        for (counter = 0; counter < argc; counter++)
                printf("%s\n", argv[counter]);

        return (0);
}
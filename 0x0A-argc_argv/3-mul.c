#include "main.h"

/**
 * main - Program entry point: find the product of 2 numeric arguments passed.
 * @argc: counts the numner of parameters passed to program in the CLI
 * @argv: pointer to an array of parameters passed to the program in the CLI
 * Return: an integer
 */

int main(int argc, char *argv[])
{
        int num1, num2, mult = 0;
        
        if ( argc > 1 && argc <= 3)
        {
                num1 = atoi(argv[1]);
                num2 = atoi(argv[2]);
                mult = num1 * num2;
                printf("%d\n", mult);
                
                return (0);
        }
        printf("Error\n");

        return (1);
}
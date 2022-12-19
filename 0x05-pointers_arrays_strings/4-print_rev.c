#include "main.h"

/**
 * print_rev - function to print a string in reverse form.
 * @str: pointer to a string variable
 * Return: Nothing
 */

 void print_rev(char *str)
{
    char *full_string;
    int counter = 0, i;

	while (*str != '\0')
	{
		full_string[counter] = putchar(*str);
		*str++;
		counter++;
	}
    printf("\nLength of the String: %d\n", counter);
    printf("String: %s\n", full_string);
    for (counter -= 1; counter >= 0; counter--)
    {
        putchar(full_string[counter]);
    }
}

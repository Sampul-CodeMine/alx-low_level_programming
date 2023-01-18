#include "function_pointers.h"

/**
 * print_name - function to print a name by accepting a string
 * as the name and printing it using a function
 * @name: the string variable
 * @(f): function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != 0))
		(*f)(name);
}

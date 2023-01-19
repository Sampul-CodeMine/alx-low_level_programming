#include "variadic_functions.h"

/**
 * print_numbers - function to print integer arguments supplied separated by
 * a character also specified in the argument
 * @separator: the character to separate each numbers printer
 * @num: number of variadic arguments to be supplied
 * @...: Variadic arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int num, ...)
{
	unsigned int itr;
	va_list arg;

	if (num == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg, num);

	for (itr = 0; itr < num; itr++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && itr < (num - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}

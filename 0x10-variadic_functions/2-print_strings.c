#include "variadic_functions.h"

/**
 * print_strings - function to print string arguments supplied separated by
 * a character also specified in the argument
 * @separator: the character to separate each numbers printer
 * @num: number of variadic arguments to be supplied
 * @...: Variadic arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int num, ...)
{
	unsigned int itr;
	char *str;
	va_list arg;

	if (num == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg, num);

	for (itr = 0; itr < num; itr++)
	{
		str = va_arg(arg, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && itr < (num - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}

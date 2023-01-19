#include "variadic_functions.h"

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);

/**
 * print_all - function to print anything of any datatype
 * @format: list of argument's datatype passed
 * @...: arguments variadic
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
	unsigned int itr1, itr2;
	char *delimiter;
	va_list arg;
	print_formats valid_format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	itr1 = itr2 = 0;
	delimiter = "";

	va_start(arg, format);
	while (format && format[itr1])
	{
		itr2 = 0;
		while (itr2 < 4)
		{
			if (format[itr1] == *valid_format[itr2].format)
			{
				printf("%s", delimiter);
				valid_format[itr2].func(arg);
				delimiter = ", ";
			}
			itr2++;
		}
		itr1++;
	}
	printf("\n");
}

/**
 * print_char - function for variadic datatype char
 * @chr: format of character to print
 * Return: nothing
 */

void print_char(va_list chr)
{
	printf("%c", va_arg(chr, int));
}

/**
 * print_int - function for variadic datatype integer
 * @integ: format of character to print
 * Return: nothing
 */

void print_int(va_list integ)
{
	printf("%d", va_arg(integ, int));
}

/**
 * print_float - function for variadic datatype float/double
 * @flt: format of character to print
 * Return: nothing
 */

void print_float(va_list flt)
{
	printf("%f", va_arg(flt, double));
}

/**
 * print_str - function for variadic datatype string
 * @str: format of character to print
 * Return: nothing
 */

void print_str(va_list str)
{
	char *string_temp;

	string_temp = va_arg(str, char *);
	if (string_temp == 0)
		string_temp = "(nil)";
	printf("%s", string_temp);
}

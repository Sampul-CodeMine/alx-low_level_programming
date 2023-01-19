#include "variadic_functions.h"

/**
 * sum_them_all - function to get the sum of al the arguments passed to it
 * @num: constant number to specify the number of arguments passed
 * @...: list of variadic arguments passed.
 * Return: sum if successful, else if @num = 0, return 0
 */

int sum_them_all(const unsigned int num, ...)
{
	unsigned int itr, sum = 0;
	va_list arp;

	if (num == 0)
		return (0);
	va_start(arp, num);
	for (itr = 0; itr < num; itr++)
		sum += va_arg(arp, int);
	va_end(arp);
	return (sum);
}

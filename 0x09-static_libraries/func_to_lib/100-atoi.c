#include "main.h"
/**
 * _atoi - function to convert a string to integer
 * @str: pointer to string to convert
 * Return: integer data
 */

int _atoi(char *str)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');
		else if (num > 0)
			break;

	} while (*str++);

	return (num * sign);
}

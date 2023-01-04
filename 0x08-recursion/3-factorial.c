#include "main.h"

/**
  * factorial - function to find the factorial of a number
  * @num: the number to find its factorial
  * Return: the factorial
  */

int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0)
		return (1);
	else
		return (num * factorial(num - 1));
}

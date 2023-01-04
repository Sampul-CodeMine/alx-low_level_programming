#include "main.h"

/**
  * _pow_recursion - function to raise a number to a power of another number
  * @num: the base number to be raised
  * @pw: the power to raise the base number to
  * Return: base number multipled pw times
  */

int _pow_recursion(int num, int pw)
{
	if (pw < 0)
		return (-1);
	else if (pw == 0)
		return (1);
	else
		return (num * (_pow_recursion(num, (pw - 1))));
}

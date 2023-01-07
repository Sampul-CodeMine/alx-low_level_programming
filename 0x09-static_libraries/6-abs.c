#include "main.h"

/**
  * _abs - Function to return the absolute value of a number
  * @num: numeric value to return its absolute value
  * Return: value of num
  */

int _abs(int num)
{
	if (num < 0)
	{
		num *= -1;
	}
	return (num);
}

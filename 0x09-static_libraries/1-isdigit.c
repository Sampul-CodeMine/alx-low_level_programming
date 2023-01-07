#include "main.h"

/**
  * _isdigit - function to check if a character is a numeric digit or not
  * @num: character to check its case
  * Return: 1 if true else 0 if false
  */

int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	return (0);
}

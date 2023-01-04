#include "main.h"

/**
  * _pow_recursion - function to raise a number to a power of another number
  * @num: the base number to be raised
  * @pw: the power to raise the base number to
  * Return: base number multipled pw times
  */

int _pow_recursion(int num, int pw)
{
	/* when the power is less than 0 */
	if (pw < 0)
		return (-1);
	else if (pw == 0) /* when the power is equal to 0 return 1 */
		return (1);
	else
		return (num * (_pow_recursion(num, (pw - 1))));
}

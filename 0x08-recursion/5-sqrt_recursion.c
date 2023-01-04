#include "main.h"

int find_perfect_square(int, int);

/**
  * _sqrt_recursion - funtion to find the squareroot of a number recursively
  * @num: the number to find its squareroot
  * Return: the natural squareroot (integer)
  */

int _sqrt_recursion(int num)
{
	return (find_perfect_square(num, 0));
}

/**
  * find_perfect_square - finds a perfect square to the base number
  * @base: the number to find it perfect square
  * @num: the initial square to the base incremented by 1
  * Return: the natural number as  the square root
  */

int find_perfect_square(int base, int num)
{
	int square = (num * num);

	if (base < 2)
		return (base);

	if (square == base)
		return (num);

	if (square > base)
		return (-1);

	return (find_perfect_square(base, (num + 1)));
}

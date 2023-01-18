#include "3-calc.h"

/**
 * op_add - function to add 2 numbers together
 * @first: first variable of integer datatype
 * @second: second variable of integer datatype
 * Return: the sum of @first and @second
 */

int op_add(int first, int second)
{
	int sum;

	sum = (first + second);
	return (sum);
}

/**
 * op_sub - function to find the difference between 2 numbers
 * @first: first variable of integer datatype
 * @second: second variable of integer datatype
 * Return: the difference between @first and @second
 */

int op_sub(int first, int second)
{
	int result;

	result = (first - second);
	return (result);
}

/**
 * op_mul - function to find the product of 2 numbers
 * @first: first variable of integer datatype
 * @second: second variable of integer datatype
 * Return: the product of @first and @second
 */

int op_mul(int first, int second)
{
	int result;

	result = (first * second);
	return (result);
}

/**
 * op_div - function to divide a number by another number
 * @first: first variable of integer datatype
 * @second: second variable of integer datatype
 * Return: the result from the division
 */

int op_div(int first, int second)
{
	int result;

	result = (first / second);
	return (result);
}

/**
 * op_mod - function to find the remainder after a division operation
 * @first: first variable of integer datatype
 * @second: second variable of integer datatype
 * Return: the remainder
 */

int op_mod(int first, int second)
{
	int result;

	result = (first % second);
	return (result);
}

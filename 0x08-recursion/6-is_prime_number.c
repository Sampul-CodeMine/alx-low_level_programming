#include "main.h"

int isPrime(int, int);

/**
  * is_prime_number - function to check if number is a prime number or not
  * @num: the number to find its squareroot
  * Return: 1 if number is prime else returns 0 if false
  */

int is_prime_number(int num)
{
	return (isPrime(num, 2));
}

/**
  * isPrime - check if a number is a prime  number or not
  * @base: the number to find it perfect square
  * @iter: the initial number to be incremented by 1
  * Return: 1 if true of 0 if false
  */

int isPrime(int base, int iter)
{
	if (base < 2)
		return (0);
	if (base == 2)
		return (1);
	if (base % iter == 0)
		return (0);
	if (iter * iter > base)
		return (1);
	return (isPrime(base, (iter + 1)));
}

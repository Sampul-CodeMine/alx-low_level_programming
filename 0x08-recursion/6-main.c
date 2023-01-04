#include "main.h"

/**
  * main - program entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);

	r = is_prime_number(1024);
	printf("%d\n", r);

	r = is_prime_number(17);
	printf("%d\n", r);

	r = is_prime_number(-3);
	printf("%d\n", r);

	return (0);
}

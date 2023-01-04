#include "main.h"

/**
  * main - program entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);

	r = _sqrt_recursion(144);
	printf("%d\n", r);
	
	r = _sqrt_recursion(1024);
	printf("%d\n", r);

	r = _sqrt_recursion(0);
	printf("%d\n", r);
	
	r = _sqrt_recursion(19);
	printf("%d\n", r);

	r = _sqrt_recursion(25);
	printf("%d\n", r);

	return (0);
}

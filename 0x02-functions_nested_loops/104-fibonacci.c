#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int count;
	unsigned long itr, jtr, k;
	unsigned long m, n, p, carry;

	count = 0;
	itr = 0;
	jtr = 1;
	for (count = 1; count <= 91; count++)
	{
		k = itr + jtr;
		itr = jtr;
		jtr = k;
		printf("%lu, ", k);
	}
	m = itr % 1000;
	itr = itr / 1000;
	n = jtr % 1000;
	jtr = jtr / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (itr + jtr) + carry;
		m = n;
		n = p;
		itr = jtr;
		jtr = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

void fizz_buzz(void);

/**
  * main - Entry Point
  * Return: Nothing
  */

int main(void)
{
	fizz_buzz();
	printf("\n");
	return (0);
}

/**
  * fizz_buzz - function to swap values  with words according to conditions
  * Return: nothing
  */

void fizz_buzz(void)
{
	int itr;

	for (itr = 1; itr <= 100; itr++)
	{
		if (itr % 3 == 0 && itr % 5 == 0)
			printf("FizzBuzz ");
		else if (itr % 3 == 0)
			printf("Fizz ");
		else if (itr % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", itr);
	}
}

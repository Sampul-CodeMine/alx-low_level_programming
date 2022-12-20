#include <time.h>

/**
  * main - This program generates random valid passwords for the crackme file
  * Return: Always 0 (Success)
  */

int main(void)
{
	int temp = 0, counter = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (counter < 2772)
	{
		temp = rand() % 128;
		if ((counter + temp) > 2772)
			break;
		counter += temp;
		printf("%c", temp);
	}
	printf("%c\n", (2772 - counter));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - This program generates random valid passwords for the crackme file
  * Return: Always 0 (Success)
  */

int main(void)
{
	char passwd[14];
	int index = 0, total = 0, first_half, second_half;

	srand(time(0));
	while (total < 2772)
	{
		passwd[index] = 33 + rand() % 94;
		total += passwd[index++];
	}
	passwd[index] = '\0';
	if (total != 2772)
	{
		first_half = (total - 2772) / 2;
		second_half = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
			first_half++;
		for (index = 0; passwd[index]; index++)
		{
			if (passwd[index] >= (33 + first_half))
			{
				passwd[index] -= first_half;
				break;
			}
		}
		for (index = 0; passwd[index]; index++)
		{
			if (passwd[index] >= (33 + second_half))
			{
				passwd[index] -= second_half;
				break;
			}
		}
	}
	printf("%s", passwd);
	return (0);
}

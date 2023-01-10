#include "main.h"

/**
  * main - program entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	char *str;

	str = str_concat("Betty ", "Holberton");
	if (str == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);
	
	str = str_concat("", "Holberton");
	if (str == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);
	
	str = str_concat("Betty ", "");
	if (str == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);

	return (0);
}

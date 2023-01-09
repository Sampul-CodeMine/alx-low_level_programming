#include "main.h"

/**
  * main - program entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}

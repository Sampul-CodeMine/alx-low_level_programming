#include "main.h"

/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	char s1[98] = "Hello ", s2[] = "World!", *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);

	return (0);
}

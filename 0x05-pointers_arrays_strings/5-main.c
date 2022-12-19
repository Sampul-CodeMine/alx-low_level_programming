#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[10] = "My School";
	char str[] = "This is a wonderful experience.";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);

	return (0);
}

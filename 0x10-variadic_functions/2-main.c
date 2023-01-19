#include "variadic_functions.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_strings(", ", 2, "Another", "Testing", "ground.");
	print_strings(", ", 2, "Jay", "Django");
	print_strings(", ", 3, "C", "Programming", "Language");
	print_strings(", ", 5, "This" , "is", "really", "AWESOME", "!!!");
	print_strings(", ", 0, "Testing", "it.");
	return (0);
}

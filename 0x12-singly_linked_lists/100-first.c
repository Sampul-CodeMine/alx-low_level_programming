#include <stdio.h>

void init_loader(void) __attribute__((constructor));

/**
 * init_loader - this is a function that acts as a constructor
 * and it runs before the main function loads.
 * Return: Nothing.
 */

void init_loader(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

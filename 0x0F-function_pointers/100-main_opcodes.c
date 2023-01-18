#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: Counts the number of parameters passed during execution
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: 0 on succes, 1 on argv != 2, 2 on negative bytes
 */
int main(int argc, char **argv)
{
	int itr, mem_bytes;
	char *arr_el;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	mem_bytes = atoi(argv[1]);

	if (mem_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr_el = (char *)main;

	for (itr = 0; itr < (mem_bytes - 1); itr++)
		printf("%02hhx ", arr_el[itr]);

	printf("%02hhx\n", arr_el[itr]);

	return (0);
}

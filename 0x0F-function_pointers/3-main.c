#include "3-calc.h"

/**
 * main - Entry point to the program
 * @argc: count of arguments supplied
 * @argv: array vertor of the number of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*ptr_func)(int, int);
	int first_num, second_num;
	char operatr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_num = atoi(argv[1]);
	second_num = atoi(argv[3]);
	ptr_func = get_op_func(argv[2]);

	if (!ptr_func)
	{
		printf("Error\n");
		exit(99);
	}

	operatr = *argv[2];

	if ((operatr == '/' || operatr == '%') && second_num == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", ptr_func(first_num, second_num));
	return (0);
}

#include "3-calc.h"

/**
 * get_op_func - function to choose which math operation is to be carried out
 * @str: pointer to string representing the math operator
 * Return: Operational result
 */

int (*get_op_func(char *str))(int, int)
{
	int itr;
	op_t oper[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	itr = 0;
	while (oper[itr].op)
	{
		if (strcmp(oper[itr].op, str) == 0)
			return (oper[itr].f);
		itr++;
	}
	return (NULL);
}

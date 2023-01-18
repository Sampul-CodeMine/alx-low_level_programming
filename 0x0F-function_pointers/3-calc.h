#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Structure op
 * @op: The mathematical operator
 * @f: The function to call for math operation
 */

typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

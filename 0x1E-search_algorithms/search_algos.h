#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Adding standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct search_s - List structure ( A singly linked list )
 * @n: integer value
 * @idx: list index
 * @next: pointer to the next list node structure
 */

typedef struct search_s
{
	int n;
	size_t idx;
	struct search_s *next;
} search_d;

/* Prototypes for the project */
/* Linear Search */
int linear_search(int *, size_t, int);

/* Binary Search */
int binary_search(int *, size_t, int);



#endif /* SEARCH_ALGOS_H */

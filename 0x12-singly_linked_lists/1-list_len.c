#include "lists.h"

/**
 */

size_t list_len(const list_t *head)
{
	size_t size;

	size = 0;
	for (size = 0; head != NULL; size++)
		head = head->next;

	return (size);
}

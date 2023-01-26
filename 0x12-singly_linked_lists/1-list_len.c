#include "lists.h"

/**
 * list_len - A function to print the length of a list
 * @head: pointer to the next node in the list
 * Return: the length of the list
 */

size_t list_len(const list_t *head)
{
	size_t size;

	size = 0;
	for (size = 0; head != NULL; size++)
		head = head->next;

	return (size);
}

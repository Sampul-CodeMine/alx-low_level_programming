#include "lists.h"

/**
 * listint_len - A function to print the length of a list
 * @head: pointer to the next node in the list
 * Return: the length of the list
 */

size_t listint_len(const listint_t *head)
{
	size_t size;

	size = 0;
	for (size = 0; head; size++)
		head = head->next;

	return (size);
}

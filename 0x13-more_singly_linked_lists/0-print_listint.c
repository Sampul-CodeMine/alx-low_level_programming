#include "lists.h"

/**
 * print_listint - A function that prints out the elements of a linked list
 * @head: points to the head of the linked list
 * Return: size the linked list
 */

size_t print_listint(const listint_t *head)
{
	size_t size;

	size = 0;
	for (size = 0; head; size++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return (size);
}

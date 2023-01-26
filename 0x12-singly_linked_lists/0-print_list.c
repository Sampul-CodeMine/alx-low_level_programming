#include "lists.h"

/**
 * print_list - A function that prints out the elements of a linked list
 * @head: points to the head of the linked list
 * Return: size the linked list
 */

size_t print_list(const list_t *head)
{
	size_t size;

	size = 0;
	for (size = 0; head != NULL; size++)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
	}
	return (size);
}

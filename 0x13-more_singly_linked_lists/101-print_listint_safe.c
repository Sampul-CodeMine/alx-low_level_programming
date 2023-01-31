#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list 
 * (can print lists with loop)
 * @head: head pointer of singly linked list
 * Return: Number of elements in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_loc, *temp_loc2;
	unsigned int itr = 0;

	temp_loc = head;
	if (temp_loc == 0)
		return (0);

	while (temp_loc != 0)
	{
		temp_loc2 = temp_loc;
		temp_loc = temp_loc->next;

		itr++;

		printf("[%p] %d\n", (void *)temp_loc2, temp_loc2->n);

		if (temp_loc2 <= temp_loc)
		{
			printf("-> [%p] %d\n", (void *)temp_loc, temp_loc->n);
			break;
		}
	}

	return (itr);
}

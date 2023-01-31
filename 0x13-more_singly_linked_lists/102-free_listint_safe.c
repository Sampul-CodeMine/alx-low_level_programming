#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list (can free lists with a loop)
 * @head: pointer to head of singly linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *temp_loc = *head, *temp_loc2;
	unsigned int iter = 0;

	if (temp_loc == 0 || head == 0)
		return (0);

	temp_loc = *head;
	while (temp_loc != 0)
	{
		temp_loc2 = temp_loc;
		temp_loc = temp_loc->next;
		iter++;

		free(temp_loc2);

		if (temp_loc2 <= temp_loc)
			break;
	}

	*head = 0;
	return (iter);
}

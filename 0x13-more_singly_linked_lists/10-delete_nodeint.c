#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node at indx
  * @head: head of the list
  * @indx: location of the node to delete
  * Return: pointer to head of list
  */

int delete_nodeint_at_index(listint_t **head, unsigned int indx)
{
	unsigned int i;
	listint_t *current_loc, *next_loc;

	if (!head || !*head)
		return (-1);
	current_loc = *head;
	if (indx == 0)
	{
		*head = (*head)->next;
		free(current_loc);
		return (1);
	}
	for (i = 0; i < (indx - 1); i++)
	{
		current_loc = current_loc->next;
		if (current_loc == NULL)
			return (-1);
	}
	next_loc = current_loc->next;
	current_loc->next = next_loc->next;
	free(next_loc);
	return (1);
}

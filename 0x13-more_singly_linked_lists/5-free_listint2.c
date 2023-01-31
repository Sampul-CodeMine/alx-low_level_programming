#include "lists.h"

/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer to head of list
  */

void free_listint2(listint_t **head)
{
	listint_t *temp_loc, *current_loc;

	if (head == NULL)
		return;
	current_loc = *head;
	while (current_loc != NULL)
	{
		temp_loc = current_loc;
		current_loc = current_loc->next;
		free(temp_loc);
	}
	*head = NULL;
}

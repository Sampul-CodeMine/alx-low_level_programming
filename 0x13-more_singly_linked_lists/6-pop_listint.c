#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops the head of a list and returns the head's data
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_loc, *temp_loc;

	if (head == NULL)
		return (0);
	temp_loc = current_loc = *head;
	if (*head)
	{
		data = current_loc->n;
		*head = current_loc->next;
		free(temp_loc);
	}
	else
		data = 0;
	return (data);
}

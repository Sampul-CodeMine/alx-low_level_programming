#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The original linked list
 * @str: The integer to add to the node
 * Return: The address of the new list or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int str)
{
	listint_t *new_list, *temp_loc;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	temp_loc = *head;
	while (temp_loc->next!= NULL)
		temp_loc = temp_loc->next;

	temp_loc->next = new_list;
	return (*temp_loc);
}

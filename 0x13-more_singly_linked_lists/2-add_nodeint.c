#include "lists.h"

/**
 * add_nodeint - a function to add a new node to an existing list
 * @head: pointer to the current location in list
 * @str: The integer value of the node to add to the new list's location
 * Return: a pointer to the current position/location in the list
 */

listint_t *add_nodeint(listint_t **head, const int *str)
{
	listint_t *temp_loc;

	temp_loc = *head;
	temp_loc = malloc(sizeof(listint_t));
	if (temp_loc == NULL)
		return (NULL);

	temp_loc->n = str;
	temp_loc->next = *head;

	*head = temp_loc;

	return (*head);
}

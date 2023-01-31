#include "lists.h"

/**
  * insert_nodeint_at_idx - function to insert a node at an index
  * @head: the head of the list
  * @idx: location to insert node
  * @num: value of the inserted node
  * Return: pointer to head of list
  */

listint_t *insert_nodeint_at_idx(listint_t **head, unsigned int idx, int num)
{
	listint_t *current_loc, *new_node;

	current_loc = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;
	if (idx == 0)
	{
		new_node->next = current_loc;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		current_loc = current_loc->next;
		idx--;
		if (!(current_loc))
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current_loc->next;
	current_loc->next = new_node;
	return (new_node);
}

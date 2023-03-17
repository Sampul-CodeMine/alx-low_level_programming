#include "lists.h"
/**
 * *get_dnodeint_at_index - gets the node at an index
 * @head: head of the list
 * @index: index to get
 * Return: pointer to the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);

			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}

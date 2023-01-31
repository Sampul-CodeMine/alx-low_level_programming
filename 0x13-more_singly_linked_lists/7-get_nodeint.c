#include "lists.h"
/**
  * get_nodeint_at_index - a function to get the last node of a list
  * @head: head of the list
  * @idx: which node to stop at
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int idx)
{
	unsigned int itr;

	itr = 0;
	while (itr < idx)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		itr++;
	}
	return (head);
}

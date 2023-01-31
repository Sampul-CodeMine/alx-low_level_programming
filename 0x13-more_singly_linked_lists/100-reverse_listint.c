#include "lists.h"

/**
 * reverse_listint - define function
 * @head: describe argument
 * Return: what does it return?
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *next;

	before = NULL;
	next = NULL;
	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = before;
			before = next;
		}
		*head = before;
		return (*head);
	}
	return (NULL);
}

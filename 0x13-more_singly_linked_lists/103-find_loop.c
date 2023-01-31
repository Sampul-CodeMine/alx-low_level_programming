#include "lists.h"

/**
 * find_listint_loop - finds address of starting node in looped linked list
 * @head: pointer to the head in linked list to test
 * Return: The address of the node where the loop starts, NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *listss;

	if (!head)
		return (NULL);

	loop = listss = head;

	while (listss && loop && loop->next)
	{
		listss = listss->next;
		loop = (loop->next)->next;

		if (loop == listss)
		{
			listss = head;

			while (listss && loop)
			{
				if (listss == loop)
					return (listss);

				listss = listss->next;
				loop = loop->next;
			}
		}
	}

	return (NULL);
}
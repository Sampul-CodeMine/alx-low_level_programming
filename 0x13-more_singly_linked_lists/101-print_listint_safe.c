#include "lists.h"

size_t list_looping(const listint_t *head);

/**
 * print_listint_safe - prints a singly linked list
 * (can print lists with loop)
 * @head: head pointer of singly linked list
 * Return: Number of elements in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t list_nodes, node_index;

	node_index = 0;
	list_nodes = list_looping(head);
	if (list_nodes == 0)
	{
		for (list_nodes = 0; head != NULL; list_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (node_index = 0; node_index < list_nodes; node_index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (list_nodes);
}

/**
 * list_looping - function to loop through a list's nodes
 * @head: pointer to the singly linked list
 * Return: 0 if not looped else return the number of unique nodes in the list
 */

size_t list_looping(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t found = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				found++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				found++;
				slow = slow->next;
			}
			return (found);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

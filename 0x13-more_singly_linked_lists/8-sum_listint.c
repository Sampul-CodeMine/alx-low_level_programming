#include "lists.h"

/**
  * sum_listint - function to sum up all the elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
  */

int sum_listint(listint_t *head)
{
	int total = 0;
	int itr;

	if (head == 0)
		return (0);

	for (itr = 0; head; itr++)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

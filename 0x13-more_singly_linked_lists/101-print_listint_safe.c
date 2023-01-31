#include "lists.h"

/**
  * print_listint_safe - define function
  * @head:
  * Return: what does it return?
  */
 
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *tmp_loc;
	unsigned int itr = 0;

	temp = head;
	if (temp == 0)
		return (0);
	while (temp != 0)
	{
		tmp_loc = temp;
		temp = temp->next;
		itr++;
		printf("[%p] %d\n", (void *)tmp_loc, tmp_loc->n);
		if(tmp_loc <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (itr);
}

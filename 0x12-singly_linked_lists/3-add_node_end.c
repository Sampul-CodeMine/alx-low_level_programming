#include "lists.h"

/**
 * string_len - function to returns the length of a string (custom strlen func)
 * @str: The string to count
 * Return: length of a string
*/

int string_len(const char *str)
{
	int count;

	count = 0;
	for (count = 0; str[count] != '\0'; count++)
	{}

	return (count);
}

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The original linked list
 * @str: The string to add to the node
 * Return: The address of the new list or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp_loc;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = string_len(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp_loc = *head;
			while (temp_loc->next)
				temp_loc = temp_loc->next;

			temp_loc->next = new_list;
			return (temp_loc);
		}
	}
	return (NULL);
}

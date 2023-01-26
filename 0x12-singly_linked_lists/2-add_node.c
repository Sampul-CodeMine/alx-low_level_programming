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
 * add_node - a function to add a new node to an existing list
 * @head: pointer to the current location in list
 * @str: The string value of the node to add to the new list's location
 * Return: a pointer to the current position/location in the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_loc;

	if (head != NULL && str != NULL)
	{
		temp_loc = malloc(sizeof(list_t));
		if (temp_loc == NULL)
			return (NULL);

		temp_loc->str = strdup(str);
		temp_loc->len = string_len(str);
		temp_loc->next = *head;

		*head = temp_loc;

		return (temp_loc);
	}
	return (0);
}

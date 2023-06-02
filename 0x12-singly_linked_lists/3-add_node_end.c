#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a link list_t list
 * @head: double pointer
 * @str: string to be used
 * Return: address of the new element
 * Otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added;
	list_t *end = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	added->str = strdup(str);
	added->len = l;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}

	while (end->next)
		end = end->next;

	end->next = added;

	return (added);
}

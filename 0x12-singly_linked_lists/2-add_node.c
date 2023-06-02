#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: string to be used
 * Return: address of the new element
 * Otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}
	added = malloc(sizeof(list_t));

	if (added == NULL)
	{
		return (NULL);
	}
	added->str = strdup(str);
	added->len = l;
	added->next = (*head);
	(*head) = added;

	return (*head);
}

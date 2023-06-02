#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer
 * Return; nothing
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}

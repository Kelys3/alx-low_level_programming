#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the node to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nnode;

	while (head != NULL)
	{
		nnode = head->next;

		free(head);
		head = nnode;
	}
}

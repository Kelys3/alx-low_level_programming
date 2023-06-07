#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: a pointer to the node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;

		free(*head);

		*head = node;
	}
	*head = NULL;
}


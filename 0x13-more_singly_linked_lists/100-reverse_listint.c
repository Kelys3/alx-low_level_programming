#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t list
 * @head: the node to be reversed
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pnode = NULL;
	listint_t *nnode = NULL;

	while (*head != NULL)
	{
		nnode = (*head)->next;
		(*head)->next = pnode;
		pnode = *head;
		*head = nnode;
	}

	*head = pnode;

	return (*head);
}

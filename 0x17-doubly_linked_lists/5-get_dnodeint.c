#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in a dlistint_t list.
 * @head: pointer to the head of the dlistint_t list.
 * @index: index of the node, starting from 0
 * Return: the nth node. Otherwise NULL if node does not exist 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

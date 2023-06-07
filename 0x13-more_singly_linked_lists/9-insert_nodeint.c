#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: the node to be used
 * @n: the value of the node
 * @idx: the index of the list where the new node should be added.
 * index starts at 0
 * Return: the address of new node
 * Otherwise NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *j;

	j = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && j != NULL; i++)
		{
			j = j->next;
		}
	}

	if (j == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = j->next;
		j->next = node;
	}

	return (node);
}

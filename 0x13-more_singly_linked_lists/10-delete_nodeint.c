#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the node to be deleted
 * @index: index of the node to be deleted, starting at 0
 * Return: 1 means success. Otherwise -1 means fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *back;
	listint_t *new;

	back = *head;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && back != NULL; j++)
		{
			back = back->next;
		}
	}

	if (back == NULL || (back->next == NULL && index != 0))
	{
		return (-1);
	}

	new = back->next;

	if (index != 0)
	{
		back->next = new->next;
		free(new);
	}
	else
	{
		free(back);
		*head = new;
	}

	return (1);
}

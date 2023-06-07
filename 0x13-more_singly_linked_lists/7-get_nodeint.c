#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: the nth node
 * @index: index of the node starting at 0
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
		return (head);
	}
	else
	{
		return (NULL);
	}
}

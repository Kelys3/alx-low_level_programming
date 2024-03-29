#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the dlistint_t list.
 * Return: number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

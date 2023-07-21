#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the dlistint_t list.
 * Return: number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_nodes);
}

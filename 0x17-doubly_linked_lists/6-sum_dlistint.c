#include "lists.h"

/**
 * sum_dlistint - adds all the data of a dlistint_t list.
 * @head: pointer to the head of the dlistint_t list.
 * Return: sum of all the data. Otherwise 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_node = 0;

	while (head)
	{
		sum_node += head->n;
		head = head->next;
	}

	return (sum_node);
}

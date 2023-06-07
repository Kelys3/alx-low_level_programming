#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: the node
 * Return: the sum of all data in a linked list
 */
int sum_listint(listint_t *head)
{
	int datasum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		datasum = datasum + head->n;
		head = head->next;
	}
	return (datasum);
}

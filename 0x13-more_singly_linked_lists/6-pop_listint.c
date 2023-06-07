#include "lists.h"

/**
 * pop_listint - deletes thr head node of a linked list
 * @head: a pointer to the node to be deleted
 * Return: the data(n) of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	return (data);
}

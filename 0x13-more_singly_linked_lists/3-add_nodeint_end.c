#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the new node
 * @n: the value of the new node
 * Return: the address of the new element
 * Otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added;
	listint_t *newnode = *head;

	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;

	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}

	while (newnode->next)
		newnode = newnode->next;

	newnode->next = added;

	return (added);
}

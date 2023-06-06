#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the new node
 * @n: the value of the new node
 * Return: the address of the new element
 * Otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;

	added->next = *head;

	*head = added;

	return (added);
}


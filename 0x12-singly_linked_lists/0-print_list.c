#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the elements 
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (h -> str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		if (h -> str != NULL)
		{
			printf("[%u] %s\n", h -> len, h -> str);
		}
		num++;
		h = h -> next;
	}
	return (num);
}

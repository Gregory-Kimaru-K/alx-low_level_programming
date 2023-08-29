#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints the elements in the list
 * @h: prints out the nodes
 * Return: Returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

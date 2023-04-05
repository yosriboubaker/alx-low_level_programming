#include "lists.h"

/**
 * print_listint - Print all elements in a givin list
 * @h: pointer to listint structure
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodesNumber = 0;

	while (h)
	{
		nodesNumber++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodesNumber);
}

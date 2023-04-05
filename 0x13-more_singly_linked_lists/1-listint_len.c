#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer to listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}

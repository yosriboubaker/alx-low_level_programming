#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to a list
 * @n: value of the node
 * Return: address of the new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!*head)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = node;
	}
	return (node);
}

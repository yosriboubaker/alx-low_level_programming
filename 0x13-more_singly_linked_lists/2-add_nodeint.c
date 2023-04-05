#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: value of the node
 * Return: pointer to the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	if (!head)
		return (NULL);

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);
	if (!*head)
		new_head->next = NULL;
	else
		new_head->next = *head;
	new_head->n = n;
	*head = new_head;

	return (*head);
}

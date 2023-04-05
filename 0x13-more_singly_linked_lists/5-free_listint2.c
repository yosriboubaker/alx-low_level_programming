#include "lists.h"

/**
 * free_listint2 - frees a list of nodes & set the head to NULL
 * @head: pointer to the head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || !*head)
		return;

	while ((*head)->next)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}

#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head element
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}

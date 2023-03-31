#include "lists.h"

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int length = 0;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	while (str[length])
		length++;

	tmp->len = length;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

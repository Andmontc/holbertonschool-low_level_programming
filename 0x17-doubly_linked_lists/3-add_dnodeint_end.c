#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end of a dlinked list
 * @head: head of the list
 * @n: data
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *pos;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	pos = *head;
	while (pos->next != NULL)
		pos = pos->next;

	pos->next = new;
	new->prev = pos;

	return (new);
}

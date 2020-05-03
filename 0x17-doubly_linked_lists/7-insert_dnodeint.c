#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert a node in a dlinked list
 * @h:list
 * @idx: index
 * @n: data
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *pos = *h;
	dlistint_t *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		pos = pos->next;
	}
	tmp = pos->next;
	new->next = tmp;
	tmp->prev = new;
	new->prev = pos;
	pos->next = new;

	return (new);
}

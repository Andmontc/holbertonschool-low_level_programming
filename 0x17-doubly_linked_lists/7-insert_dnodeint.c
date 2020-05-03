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
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		pos = pos->next;
		if (pos == NULL)
			return (NULL);
	}

	if (pos->next == NULL)
		return (add_dnodeint_end(h, n));

	new->n = n;
	tmp = pos->next;
	new->next = tmp;
	tmp->prev = new;
	new->prev = pos;
	pos->next = new;

	return (new);
}

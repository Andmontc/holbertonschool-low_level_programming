#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a node in and index
 * @head: pointer to pointer to the head of the list
 * @idx: index
 * @n: value
 * Return: new list box
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pos = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = pos;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (pos == NULL || pos->next == NULL)
			return (NULL);
		pos = pos->next;
	}
	new->next = pos->next;
	pos->next = new;
	return (new);
}

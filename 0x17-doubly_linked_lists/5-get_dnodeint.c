#include "lists.h"
/**
 * get_dnodeint_at_index - function that locate a node
 * @head: list
 * @index: index
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *pos = head;

	for (i = index; i != 0; i--)
	{
		if (pos == NULL)
			return (NULL);
		pos = pos->next;
	}
	return (pos);
}

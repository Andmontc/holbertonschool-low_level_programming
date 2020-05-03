#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete a node at an index given
 * @head: list
 * @index: index
 * Return: 1 sucess, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index -1; i++)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next == NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}

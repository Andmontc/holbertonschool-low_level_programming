#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes an node
 * @head: first node
 * @index: node to be deleted
 * Return: 1 sucess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pos = *head;
	listint_t *tmp;

	if (pos == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pos);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (pos->next == NULL)
		{
			return (-1);
		}
		pos = pos->next;
	}
	tmp = pos->next;
	pos->next = tmp->next;
	free(tmp);
	return (1);
}

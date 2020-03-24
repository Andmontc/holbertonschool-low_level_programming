#include "lists.h"
/**
 * get_nodeint_at_index -  function that prints an index
 * @index: number to print
 * @head: head of the list
 * Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pos = head;
	unsigned int i = 0;

	while (pos)
	{
		if (head == NULL)
			return (NULL);

		if (i == index)
		{
			return (pos);
		}
		pos = pos->next;
		i++;
	}
	return (NULL);
}

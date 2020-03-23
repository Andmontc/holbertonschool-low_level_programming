#include "lists.h"
/**
 * 
 * 
 * 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pos = head;
	unsigned int i;

	while (pos)
	{
		if (i == index)
		{
			return (pos);
		}
		pos = pos->next;
		i++;
	}
	return (NULL);
}

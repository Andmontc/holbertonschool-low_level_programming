#include "lists.h"
/**
 * free_listint - funtion that free a list
 * @head: first node
 */
void free_listint(listint_t *head)
{
	int i;
	listint_t *ptr;
	listint_t *pos;

	ptr = head;

	for (i = 0; ptr != NULL; i++)
	{
		pos = ptr->next;
		free(ptr);
		ptr = pos;
	}
}

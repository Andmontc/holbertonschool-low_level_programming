#include "lists.h"
/**
 *free_dlistint - function that frees the list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *ptr;
	dlistint_t *pos;

	ptr = head;

	for (i = 0; ptr != NULL; i++)
	{
		pos = ptr->next;
		free(ptr);
		ptr = pos;
	}
}

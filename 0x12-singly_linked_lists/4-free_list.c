#include "lists.h"
/**
 *free_list - function that frees the list
 * @head: list
 */
void free_list(list_t *head)
{
	int i;
	list_t *ptr;
	list_t *pos;

	ptr = head;

	for (i = 0; ptr != NULL; i++)
	{
		pos = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = pos;
	}
}

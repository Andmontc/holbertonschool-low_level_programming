#include "lists.h"
/**
 * list_len - Function that return the numbers of elements
 * @h: struct of elements
 * Return: amount of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}

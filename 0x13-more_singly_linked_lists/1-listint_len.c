#include "lists.h"
/**
 * listint_len - prints the number of elements
 * @h: struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}

#include "lists.h"
/**
 * print_list - Function that prints a list
 * @h: struct
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (!h)
	{
		return (0);
	}
	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (i);
}

#include "lists.h"
/**
 * sum_dlistint - Function that adds the data in a dlinked list
 * @head: list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int add = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		add += tmp->n;
		tmp = tmp->next;
	}
	return (add);
}

#include "lists.h"
/**
 * sum_listint - function tha sums a linked list
 * @head: head of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *pos = head;
	unsigned int sum = 0;

	while (pos)
	{
		sum += pos->n;
		pos = pos->next;
	}
	return (sum);
}

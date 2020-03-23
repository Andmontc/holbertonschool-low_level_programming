#include "lists.h"
/**
 * pop_listint - function that deletes a node
 * @head: node
 * Return: new head
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *nh;

	if (!*head)
		return (0);

	nh = *head;
	num = nh->n;
	*head = (*head)->next;
	free(nh);

	return (num);
}

#include "lists.h"
/**
 * add_nodeint - function that adds a node
 * @n: node
 * @head: first node
 * Return: head
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

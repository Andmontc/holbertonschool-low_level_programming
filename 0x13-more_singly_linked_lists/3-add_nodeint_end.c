#include "lists.h"
/**
 * add_nodeint_end - function that add a node at the end
 * @n: nodes
 * @head: first node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;

	listint_t *ulti = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	for (i = 0; ulti->next != NULL; i++)
		ulti = ulti->next;

	ulti->next = new;
	new->next = NULL;
	return (new);
}

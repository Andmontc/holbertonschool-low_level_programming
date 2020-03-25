#include "lists.h"
/**
 * reverse_listint - function that reverse a list
 * @head: start of the list
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *anterior = NULL;
	listint_t *posterior;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next != NULL)
		return (*head);

	while ((*head)->next != NULL)
	{
		posterior = (*head)->next;
		(*head)->next = anterior;
		anterior = *head;
		*head = posterior;
	}
	(*head) = anterior;
	return (*head);
}

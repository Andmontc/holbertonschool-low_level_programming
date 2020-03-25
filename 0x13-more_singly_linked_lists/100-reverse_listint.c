#include "lists.h"
/**
 * reverse_listint - function that reverse a list
 * @head: start of the list
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *anterior = *head;
	listint_t *posterior;


	if (!(*head) || !head)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	posterior = (*head)->next;
	*head = posterior;
	anterior->next = NULL;


	while ((*head)->next)
	{
		posterior = (*head)->next;
		(*head)->next = anterior;
		anterior = *head;
		(*head) = posterior;
	}

	(*head)->next = anterior;

	return (*head);

}

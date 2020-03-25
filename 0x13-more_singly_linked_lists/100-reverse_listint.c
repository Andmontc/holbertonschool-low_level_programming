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

	if (anterior == NULL)
		return (NULL);

	if ((*head)->next != NULL)
		return (*head);

	posterior = anterior->next;
	anterior->next = NULL;

	while (posterior != NULL)
	{
		anterior = posterior;
		posterior = posterior->next;
		anterior->next = *head;
		*head = anterior;
	}
	return (*head);
}

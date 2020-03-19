#include "lists.h"
/**
 * add_node_end - function that adds a node
 * @head: head of the list
 * @str: new node
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, len = 0;

	list_t *ulti = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	while (str[len] != '\0')
	len++;

	new->len = len;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	for (i = 0; ulti->next != NULL; i++)
		ulti = ulti->next;
	ulti->next = new;
	return (new);
}

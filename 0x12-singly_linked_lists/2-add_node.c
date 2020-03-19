#include "lists.h"
/**
 * add_node - function that adds a node
 * @head: head of the list
 * @str: new node
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	while (str[len] != '\0')
	len++;

	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

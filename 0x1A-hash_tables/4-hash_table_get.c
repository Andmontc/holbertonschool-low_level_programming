#include "hash_tables.h"
/**
 * hash_table_get - function that get the value form a hash table
 * @ht: hash table
 * @key: key of the table
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	if (tmp == NULL)
		return (NULL);

	while (strcmp(tmp->key, key))
	{
		tmp = tmp->next;
	}
	return (tmp->value);
}

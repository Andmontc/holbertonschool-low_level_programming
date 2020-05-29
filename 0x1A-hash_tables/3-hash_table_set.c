#include "hash_tables.h"
/**
 * hash_table_set - Function that add an element to a hash table
 * @ht: hash table
 * @key: key of the hash table
 * @value: value of the hash
 * Return: 1 succed, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newele;
	unsigned int index, i;

	if (key == NULL || strlen(key) == 0 || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0) /* search for the key */
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value); /* update the value */
			return (1);
		}
	}
	newele = malloc(sizeof(hash_node_t));
	if (newele == NULL)
		return (0);

	newele->value = strdup(value);
	newele->key = strdup(key);
	newele->next = ht->array[index];
	ht->array[index] = newele;
	return (1);
}

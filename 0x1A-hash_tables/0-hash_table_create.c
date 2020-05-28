#include "hash_tables.h"
/**
 * hash_table_create -  function that creates a hash table
 * @size: size of the table
 * Return: the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;

	hasht = malloc(sizeof(hash_table_t)); /* create the hash table */
	if (hasht == NULL)
		return (NULL);
	hasht->size = size;
	hasht->array = calloc(sizeof(hash_node_t), size); /* creates the nodes */
	if (hasht->array == NULL)
		return (NULL);

	return (hasht);
}

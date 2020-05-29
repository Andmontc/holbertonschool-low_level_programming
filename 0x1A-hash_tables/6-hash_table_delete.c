#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a HT
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++) /* advance through the HT */
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL) /* free the nodes in the index */
			{
				tmp = ht->array[i]->next; /* save the next box */
				free(ht->array[i]->key); /* free the index box */
				free(ht->array[i]->value); /* free the index box */
				free(ht->array[i]); /* free the index box */
				ht->array[i] = tmp; /* move the box */
			}
		}
	}
	free(ht->array); /* free the array */
	free(ht); /* free the hash table */
}

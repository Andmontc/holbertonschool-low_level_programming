#include "hash_tables.h"
/**
 * key_index - function that get an index
 * @key: key of the hash table
 * @size: size of the hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, long int size)
{
	return (hash_djb2(key) % size);
}

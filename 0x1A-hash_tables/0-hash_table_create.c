#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: Array size.
 *
 * Return: If error NULL.
 *         Otherwise a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int c;

	ht = malloc(sizeof(size));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (c = 0; c < size; c++)
		ht->array[c] = NULL;

	return (ht);
}

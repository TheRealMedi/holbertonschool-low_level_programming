#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: Array size.
 *
 * Return: If error NULL.
 *         Otherwise: a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;

	hash = malloc(sizeof(size));
	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = calloc(size, sizeof(hash_node_t *));

	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}

	return (hash);
}

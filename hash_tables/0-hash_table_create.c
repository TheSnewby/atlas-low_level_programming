#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array (buckets)
 *
 * Return: pointer to the newly created has table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i;

	new_ht->array = NULL;
	new_ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (size == 0 || new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = (hash_node_t **)calloc(new_ht->size, sizeof(hash_node_t *));
	if (new_ht->array == NULL)
		return (NULL);

	for (i = 0; i < new_ht->size; i++)
	{
		new_ht->array[i] = NULL;
	}

	return (new_ht);
}

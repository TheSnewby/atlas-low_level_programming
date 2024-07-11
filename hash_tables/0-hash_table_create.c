#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array (buckets)
 *
 * Return: pointer to the newly created has table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (size == 0 || new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	return (new_ht);
}

#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to be hashed
 * @value: value associated with key
 *
 * Return: 1 if succeeds, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key); /* duplicated to bypass const */
	new_node->next = NULL;
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{ /* consider singling this out and freeing key if value fails */
		return (0);
	}

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else /* if collision */
	{
		if (strcmp(key, ht->array[index]->key))
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else /* overwrites existing key-values */
		{
			new_node->next = ht->array[index]->next;
			ht->array[index] = new_node;
		}
	}
	return (1);
}

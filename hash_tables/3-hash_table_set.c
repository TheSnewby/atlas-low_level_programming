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
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	index = hash_djb2(key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key;
	new_node->next = NULL;
	new_node->value = value;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (1);
}

#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	int i;
	int print_count = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (print_count > 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			print_count++;
		}
	}
	printf("}");
}


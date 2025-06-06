#include "hash_tables.h"
/**
 * shash_table_create - creates a shash_table
 * @size: the size of the table
 *
 * Return: pointer to the newly created has table, NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new_ht = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = NULL;
	new_ht->shead = NULL;
	new_ht->stail = NULL;

	new_ht->array = (shash_node_t **)calloc(new_ht->size, sizeof(shash_node_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < new_ht->size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}

/**
 * shash_sort_insert - inserts node into sorted list
 * @ht: hash table
 * @new_node: node to be inserted
 */
void shash_sort_insert(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->snext = NULL;
		new_node->sprev = NULL;
		return;
	}
	temp = ht->shead;
	while (temp != NULL)
	{	/* check first node */
		if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->sprev = NULL;
			temp->sprev = new_node;
			new_node->snext = temp;
			ht->shead = new_node;
			break;
		}	/* if insert at end */
		else if (temp->snext == NULL)
		{
			temp->snext = new_node;
			new_node->sprev = temp;
			new_node->snext = NULL;
			ht->stail = new_node;
			break;
		}	/* in the middle */
		else if (temp->snext != NULL && strcmp(new_node->key, temp->key)
		> 0 && strcmp(new_node->key, temp->snext->key) < 0)
		{
			new_node->snext = temp->snext;
			temp->snext->sprev = new_node;
			temp->snext = new_node;
			new_node->sprev = temp;
			break;
		}
		temp = temp->snext;
	}
}

/**
 * shash_table_set - populates the table with a new node
 * @ht: hash table
 * @key: key for new node
 * @value: value for new node
 *
 * Return: 1 if succeeds, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL, *temp = NULL;

	if (!ht || !key || !value)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	temp = ht->array[index];
	if (!temp)  /* Insert new node at array index */
	{
		new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		while (temp) /* If there's already a list at array index */
		{
			if (strcmp(key, temp->key) == 0)  /* if same key, overwrite current */
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}

		new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	shash_sort_insert(ht, new_node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key for value
 *
 * Return: value associated with key, NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table in sorted order
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int print_count = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (print_count > 0)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		print_count++;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse sorted order
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int print_count = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (print_count > 0)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		print_count++;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL;

	if (ht == NULL)
		exit(0);

	while (ht->shead != NULL)
	{
		temp = ht->shead;
		ht->shead = ht->shead->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}

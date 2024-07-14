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

	new_ht->array = NULL;
	new_ht->size = size;
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
	shash_node_t *new_node = NULL;
	shash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->next = NULL;
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}

	/* INSERT IN REGULAR ARRAY  */
	/* no nodes at index */
	if (ht->array[index] == NULL) 
	{
		ht->array[index] = new_node;
		ht->array[index]->next = NULL;
	}
	else /* collision */
	{	/* if same key, insert at head */
		if (strcmp(key, ht->array[index]->key) != 0)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else /*overwrite existing values */
		{
			temp = ht->array[index];
			free(temp->key);
			free(temp->value);
			new_node->next = temp->next;
			ht->array[index] = new_node;
			free(temp);
		}
	}

	/* INSERT IN KEY-SORTED ARRAY */
	/* if sorted list is empty */
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->snext = NULL;
		new_node->sprev = NULL;
	}
	else /* sorted list not empty */
	{
		temp = ht->shead;
		while (temp != NULL)
		{	/* check first node */
			if (strcmp(new_node->key, temp->key) < 0)
			{
				new_node->sprev = NULL;
				temp->sprev = new_node;
				new_node->snext = temp;
				ht->shead = new_node;
				break;
			} 	/* if insert at end */
			else if (temp->snext == NULL)
			{
				temp->snext = new_node;
				new_node->sprev = temp;
				new_node->snext = NULL;
				ht->stail = new_node;
				break;
			}
			 /* if somewhere in the middle */
			else if (strcmp(new_node->key, temp->key) > 0 && strcmp(new_node->key, temp->snext->key) < 0)
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
	return (1);
}

/**
 * hash_table_get - retrieves a value associated with a key
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
		printf("'%s: '%s'", temp->key, temp->value);
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
		printf("'%s: '%s'", temp->key, temp->value);
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

/**
 * regular printer to see what's being saved
 *
void shash_table_print_legacy(const shash_table_t *ht)
{
	//printf("debug: you are here 3\n");
	shash_node_t *temp = NULL;
	unsigned long int i;
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
			temp = temp->next;
		}
	}
	printf("}\n");
}
*/
/*
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
*/

#include "hash_tables.h"
/**
 * hash_table_set - setting up a hash table with key and value
 * @ht: the hash table
 * @key: key yo the hash table
 * @value: value associated to the key
 * Return: 1 on success and 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *new_value;
	unsigned long int position, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	position = key_index((const unsigned char *)key, ht->size);
	for (i = position; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[position];
	ht->array[position] = new_node;

	return (1);
}


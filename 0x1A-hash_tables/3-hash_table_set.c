#include "hash_tables.h"
/**
 * hash_table_set - setup hash table
 * @ht: hash table
 * @key: ky of hash table
 * @value: value of hash table
 * Return: 1 on success and 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *new_val;
	unsigned long int position;
	int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_val = strdup(value);
	if (new_val == NULL)
		return (0);

	position = key_index((const unsigned char *)key, ht->size);
	for (i = position; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_val;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = new_val;
	new_node->next = ht->array[position];
	ht->array[position] = new_node;

	return (1);
}
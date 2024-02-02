#include "hash_tables.h"
/**
 * hash_table_get - get value from a hash table
 * @ht: hash table
 * @key: key to the value to get
 * Return: value to get
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	int position;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	position = key_index((const unsigned char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);

	node = ht->array[position];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}

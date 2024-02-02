#include "hash_tables.h"

/**
 * *hash_table_create - create a new hash table
 * @size: size of the table
 * Return: a new hash
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htc = NULL;
	unsigned long int i;

	htc  = malloc(sizeof(hash_table_t));
	if (htc == NULL)
		return (NULL);

	htc->size = size;
	htc->array = malloc(sizeof(hash_node_t *) * size);
	if (htc->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		htc->array[i] = NULL;

	return (htc);
}
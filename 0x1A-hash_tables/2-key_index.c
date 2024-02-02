#include "hash_tables.h"
/**
 * key_index - function that returns the index
 * @key: key to the hash table entry
 * @size: size of the hash table entry
 * Return: index of the key/value pair in the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2ex(key) % size);
}

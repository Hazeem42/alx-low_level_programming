#include "hash_tables.h"

/**
 * key_index - Get the index atwhich a key/value pair should
 * be stored in array oof a hash table.
 * @key: The key to get the index of.
 * @size: The size of the aray of the hash table.
 *
 * Return: the index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

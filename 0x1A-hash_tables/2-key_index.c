#include "hash_tables.h"

/**
 * key_index - index for key given
 * @key: key (string) to hash
 * @size: parameter
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


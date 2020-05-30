#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key:  is the key you are looking
 * Return: value associated or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array || !(ht->array)[index])
		return (NULL);

	node = (ht->array)[index];

	while (strcmp(node->key, key))
		node = node->next;

	return (node ? node->value : NULL);
}

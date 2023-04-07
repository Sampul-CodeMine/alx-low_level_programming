#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "alx", "hetairas");
	hash_table_set(ht, "holberton", "mentioner");
	hash_table_set(ht, "kimba", "heliotropes");
	hash_table_set(ht, "sky", "neurospora");
	hash_table_set(ht, "sololearn", "depravement");
	hash_table_set(ht, "udemy", "serafins");

	return (EXIT_SUCCESS);
}

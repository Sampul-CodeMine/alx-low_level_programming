#include "main.h"

/**
 * res_mem - reserves memory initialized to 0
 * @nmemb: # of bytes
 * Return: pointer
 */
char *res_mem(unsigned int nmemb)
{
	unsigned int i;
	char *p;

	p = malloc(nmemb + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
		p[i] = '0';
	p[i] = '\0';
	return (p);
}

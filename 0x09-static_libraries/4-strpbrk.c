#include "main.h"

/**
  * _strpbrk - search for a word in a string
  * @src: source string to search from
  * @query: accepted characters to search for
  * Return: from the searched query to the end of the string
  */
char *_strpbrk(char *src, char *query)
{
	int a = 0, b;

	while (src[a])
	{
		b = 0;

		while (query[b])
		{
			if (src[a] == query[b])
			{
				src += a;
				return (src);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}

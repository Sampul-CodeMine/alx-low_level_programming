#include "main.h"

/**
  * argstostr - function to convert all arguments
  * passed to the program in CLI to string
  * @parc: the parameter count
  * @parvs: the parameter values
  * Return: String of all converted arguments.
  */

char *argstostr(int parc, char **parvs)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *str;

	if (parc == 0 || parvs == NULL)
		return (NULL);

	while (i < parc)
	{
		while (parvs[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
	}

	str = malloc((sizeof(char) * ch) + parc + 1);

	i = 0;
	while (parvs[i])
	{
		while (parvs[i][j])
		{
			str[k] = parvs[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}

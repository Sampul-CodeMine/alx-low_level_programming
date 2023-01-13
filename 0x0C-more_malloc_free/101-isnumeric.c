#include "main.h"

/**
  * isnumeric - tells if the string consists of digits
  * @ar: pointer to current item in argument
  * Return: returns digits
  */
int isnumeric(char *ar)
{
	int i, check, d;

	d = 0, check = 1;
	for (i = 0; *(ar + i) != 0; i++)
	{
		d = isdigit(*(ar + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

#include "main.h"

/**
  * _isupper - function to check if a character is upper-cased or not
  * @chr: character to check its case
  * Return: 1 if true else 0 if false
  */

int _isupper(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
	{
		return (1);
	}
	return (0);
}

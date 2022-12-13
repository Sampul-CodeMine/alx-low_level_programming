#include "main.h"

/**
  * _isalpha - Function to check if a character is lower/upper cased letter
  * @chr: alphabet to test if uppercased or lowercased alphabet
  * Return: 1 if true or 0 if false
  */

int _isalpha(int chr)
{
	if ((chr >= 'a' && chr <= 'x')|| (chr >= 'A' && chr <= 'Z'))
		return (1);
	else
		return (0);
}

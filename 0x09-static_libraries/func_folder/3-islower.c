#include "main.h"

/**
  * _islower - Function to check if a character is lower cased or not
  * @chr: alphabet to test if uppercased or lowercased
  * Return: 1 if true or 0 if false
  */

int _islower(int chr)
{
	if (chr >= 'a' && chr <= 'x')
		return (1);
	else
		return (0);
}

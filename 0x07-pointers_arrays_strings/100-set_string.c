#include "main.h"

/**
  * set_string - Sets the value of a pointer to char
  * @init_str: the value to modify
  * @to_new_str: the value to assign as new string
  * Return: Nothing.
  */

void set_string(char **init_str, char *to_new_str)
{
	*init_str = to_new_str;
}


#include "main.h"

/**
  * palindrome_validator - function to check the string length at both ends
  * @str: string to check if it is a palindrome
  * Return: 1 if true or 0 if false
  */

int palindrome_validator(char *str)
{
	int strlen;

	strlen = _strlen_recursion(str) - 1;
	if (*str == str[strlen])
	{
		str++;
		strlen--;
	}
	else
		return (0);

	return (1);
}

/**
  * is_palindrome - function to check if a string is a palindrome
  * @str: string to check
  * Return: 1 if true or 0 if false
  */

int is_palindrome(char *str)
{
	if (*str == '0')
		return (1);
	return (palindrome_validator(str));
}

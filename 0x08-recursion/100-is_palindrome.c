#include "main.h"

/**
  * strlen_recursion - recursively print the length of a string
  * @str: the string to be get its length recursively
  * Return: the length (integer)
  */

int strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);

	str++;
	return (strlen_recursion(str) + 1);
}

/**
  * palindrome_validator - function to check the string length at both ends
  * @str: string to check if it is a palindrome
  * Return: 1 if true or 0 if false
  */

int palindrome_validator(char *str)
{
	int len = strlen_recursion(str) - 1;

	if (*str == str[len])
	{
		str++;
		len--;
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
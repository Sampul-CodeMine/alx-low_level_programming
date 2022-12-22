#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: Pointer to the destination variable
  * @src: Pointer to the source variable
  * @copy_lenght: The size of data to copy from the source (integer value)
  * Return: A char value
  */
  
  char *_strncpy(char *dest, char *src, int copy_lenght)
  {
	  int itr = 0, counter = 0;
	  
	  /* getting the length of the source */
	  while (src[itr])
		  itr++;
	  
	  /* copying character by character to the desetination */
	  while (counter < copy_lenght && src[counter])
	  {
		  dest[counter] = src[counter];
		  counter++;
	  }
	  /* fill the remaining space with an empty character */
	  while (counter < length)
	  {
		  dest[counter] = '\0';
		  counter++;
	  }
	  return (dest);
  }
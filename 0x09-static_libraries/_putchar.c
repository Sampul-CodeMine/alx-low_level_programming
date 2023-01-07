#include <unistd.h>
/**
  * _putchar - this writes the character chr to the standard output
  * @chr: this is the character to print
  * Return: On success 1
  * On Error, -1 is retured
  */
int _putchar(char chr)
{
	return (write(1, &chr, 1));
}

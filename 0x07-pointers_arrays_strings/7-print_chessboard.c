#include "main.h"

/**
  * print_chessboard - Print the chessboard
  * @chr: this is the array of pieces
  * Return: Nothing.
  */
void print_chessboard(char (*chr)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(chr[b][c]);
		}

		_putchar('\n');
	}
}

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int randomstr()
{
	static int cipher_text = -1;

	cipher_text++;
	if (cipher_text == 0 || cipher_text == 1)
		return (8);
	if (cipher_text == 2)
		return (7);
	if (cipher_text == 3)
		return (9);
	if (cipher_text == 4)
		return (23);
	if (cipher_text == 5)
		return (74);
	return (cipher_text * cipher_text % 30000);
}

#include "main.h"

/**
 * read_textfile - function to read the content of a textfile and print
 * out to STDOUT
 * @file_name: fullpath of the file to be read
 * @chrs: characters to read.
 * Return: on success return 0
 */
ssize_t read_textfile(const char *file_name, size_t chrs)
{
	int filedesc;
	int read_chars;
	char *buffer;

	/* sets the size of the buffer */
	buffer = malloc(sizeof(char *) * chrs);

	/* if the buffer is empty*/
	if (buffer == NULL)
		return (0);

	/* if the filename is empty*/
	if (file_name == NULL)
		return (0);

	/* set the file descriptor */
	filedesc = open(file_name, O_RDONLY);
	if (filedesc == -1)
		return (0);

	read_chars = read(filedesc, buffer, chrs);
	write(STDOUT_FILENO, buffer, read_chars);

	free(buffer);
	close(filedesc);
	return (read_chars);
}

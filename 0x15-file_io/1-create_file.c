#include "main.h"

/**
 * create_file - function to create a file if it does not exist & write to it
 * @file_name: name of the file to create
 * @contents: a NULL terminated string to be written to the created file
 * Return: On success (1), on failure (-1)
 * Description: The function creates a file which must have the file
 * permissions 'rw'. if the file already exists, it truncates the file.
 * if the file_name is empty, return -1
 * if the content is empty create an empty file.
 */

int create_file(const char *file_name, char *contents)
{
	int filedesc, write_status, length = 0;

	if (file_name == NULL)
		return (-1);
	filedesc = open(file_name, O_RDWR | O_CREAT, O_TRUNC, S_IRUSR | S_IWUSR);
	if (filedesc == -1)
		return (-1);
	if (contents == NULL)
	{
		close(filedesc);
		return (-1);
	}
	while (contents[length])
		length++;
	write_status = write(filedesc, contents, length);
	if (close(filedesc) == -1)
		return (-1);
	if (write_status == -1)
		return (-1);
	return (1);
}

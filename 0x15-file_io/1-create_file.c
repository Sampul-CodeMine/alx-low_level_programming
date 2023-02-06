#include "main.h"

/**
 * create_file - function to create a file if it does not exist and write to it.
 * @ile_name: name of the file to create
 * @contents: a NULL terminated string to be written to the created file 
 * Return: On success (1), on failure (-1)
 * Description: The function creates a file which must have the file
 * permissions 'rw'. if the file already exists, it truncates the file.
 * if the file_name is empty, return -1
 * if the content is empty create an empty file.
 */

int create_file(const char *file_name, char *contents)
{
	int filedesc;
	int length = 0;

	if (file_name == NULL)
		return (-1);
	filedesc = open(file_name, O_RDWR | O_CREAT, O_TRUNC, 0600);

	if (filedesc == -1)
		return (-1);
	
	for(length = 0; contents[length]; length++)
	{}
	if (contents)
		write(filedesc, contents, length);

	close(filedesc);

	return (1);
}

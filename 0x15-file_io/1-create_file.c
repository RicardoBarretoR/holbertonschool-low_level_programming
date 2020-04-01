#include "holberton.h"
/**
 *create_file - Creates a file
 *@filename: is the name of the file to create
 *@text_content: string terminated in NULL
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | OWRONLY, O6OO);

	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		write(fd, text_content, len);
	}

	close(fd);
	return (1);
}

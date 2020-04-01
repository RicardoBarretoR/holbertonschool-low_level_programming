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
	ssize_t let = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}
	else
	{
		while (text_content[len])
			len++;

		let = write(fd, text_content, len);
	}
	if (let == -1)
		return (-1);

	close(fd);
	return (1);
}

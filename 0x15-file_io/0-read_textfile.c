#include "holberton.h"
/**
 *read_textfile - Reads a text file and prints to the POSIX standard output
 *@filename: Pointer that point at a string
 *@letters: Number of letter it should read and print
 *Return: the actual number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;			/*file descriptor*/
	ssize_t nbytes, nlet; /*number bytes and letters*/
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	nbytes = read(fd, buf, letters);

	if (nbytes == -1)
		return (0);


	nlet = write(STDOUT_FILENO, buf, nbytes);

	if (nlet == -1)
		return (0);

	close(fd);
	free(buf);
	return (nlet);
}

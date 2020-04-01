#include "holberton.h"

/**
 * read_textfile - Read a text
 * @filename: name of the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *c = malloc(letters);

	if (!c || !*filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(c);
		return (0);
	}
	rd = read(fd, c, letters);
	if (rd == -1)
	{
		free(c);
		return (0);
	}
	wr = write(STDOUT_FILENO, c, rd);
	if (wr == -1)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fd);
	return (wr);
}

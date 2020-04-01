
#include "holberton.h"
/**
 * append_text_to_file - append text
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	fd = open(filename,  O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

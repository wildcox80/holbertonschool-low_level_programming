#include "holberton.h"
/**
 *main - entry point.
 *@argc: number of argument
 *@argv: character value an array of pointers to the strings.
 *
 *Return: 0 if success.
 */

int main(int argc, char **argv)
{
	char buffer[1024];
	int rd, file_from, file_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(file_from, buffer, 1024);
	while (rd > 0)
	{
		if (write(file_to, buffer, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rd = read(file_from, buffer, 1024);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_to))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	if (close(file_from))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	return (0);
}

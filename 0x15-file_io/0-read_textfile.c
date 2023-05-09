#include "main.h"

int free_func(char *buf);

/**
 * read_textfile - Read a text file and print to standard output
 * @filename: file path
 * @letters: number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = NULL;
	ssize_t f_read, f_write;

	if (filename == NULL)
		return (0);

	if (letters != 0)
	{
		buf = malloc(letters + 1);
		if (buf == NULL)
			return (0);
		fd = open(filename, O_RDONLY);

		if (fd == -1)
			return (free_func(buf));

		f_read = read(fd, buf, letters);
		if (f_read == -1)
			return (free_func(buf));

		f_write = write(STDOUT_FILENO, buf, f_read);
		if (f_write != f_read)
			return (free_func(buf));

		close(fd);
		free(buf);
		return (f_write);
	}
	return (letters);
}

/**
 * free_func - Free malloc on error
 * @buf: pointer to memory
 *
 * Return: 0
 */
int free_func(char *buf)
{
	free(buf);
	return (0);
}

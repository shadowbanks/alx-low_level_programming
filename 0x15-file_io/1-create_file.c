#include "main.h"

int _strlen(char *s);

/**
 * create_file - Create a file
 * @filename: name of file to be created
 * @text_content: a string to be written into the new file
 *
 * Return: 1 (on success) or -1 (on failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		f_write = write(fd, text_content, len);
		if (f_write == -1)
			return (-1);
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Calculate length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++, s++;
	return (i);
}

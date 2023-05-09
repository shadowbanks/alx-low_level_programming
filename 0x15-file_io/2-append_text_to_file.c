#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - Append a file
 * @filename: path to file
 * @text_content: String to be appended
 *
 * Return: 1 (on success) or -1 (on failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		f_write = write(fd, text_content, len);
		if (f_write == -1)
			return (-1);
		close(fd);
	}
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

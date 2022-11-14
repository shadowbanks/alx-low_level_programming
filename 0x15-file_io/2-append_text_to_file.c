#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
  * append_text_to_file - append a file
  * @filename: path to file
  * @text_content: string to append
  *
  * Return: 1 on success
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		write(fd, '\0', 0);
		close(fd);
		return (1);
	}

	size = strlen(text_content);

	write(fd, text_content, size);

	close(fd);
	return (1);
}

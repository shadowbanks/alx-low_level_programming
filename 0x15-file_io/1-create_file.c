#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
  * create_file - create a file
  * @filename: file path/name
  * @text_content: String to write
  *
  * Return: 1
  */
int create_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
/*		write(fd, "\0", 1);*/
		close(fd);
		return (1);
	}

		return (1);

	size =  strlen(text_content);

	if (size != 0)
		write(fd, text_content, size);

	close(fd);

	return (1);
}

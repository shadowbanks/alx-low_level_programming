#include "main.h"

void print_err(int, char *);
int open_file(char *, int);
void close_file(int);

/**
 * main - copy content of a file to a another file
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0 (on success)
 */
int main(int ac, char **av)
{
	char *buff = NULL;
	int fd, fd1;
	ssize_t f_read, f_write;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open_file(av[2], 1);
	fd1 = open_file(av[1], 2);

	buff = malloc(1024);
	if (buff == NULL)
		return (-1);

	while ((f_read = read(fd1, buff, 1024)) > 0)
	{
		if (f_read == -1)
			print_err(2, av[1]);
		f_write = write(fd, buff, f_read);
		if (f_write == -1)
			print_err(1, av[2]);
	}
	close_file(fd);
	close_file(fd1);

	return (0);
}

/**
 * print_err - Print error message
 * @opt: determines which error to print
 *
 * Return: nothing
 */
void print_err(int opt, char *file_name)
{
	if (opt == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
	else if (opt == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}
}

/**
 * open_file - Open a file, and check if successful
 * @file_name: name of file
 * @opt: 1 for write, 2 for read
 *
 * Return: file descriptor
 */
int open_file(char *file_name, int opt)
{
	int fd;

	umask(0);

	if (opt == 1)
	{
		fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 00664);
		if (fd == -1)
			print_err(1, file_name);
	}
	else if (opt == 2)
	{
		fd = open(file_name, O_RDONLY);
		if (fd == -1)
			print_err(2, file_name);
	}
	return (fd);
}

/**
 * close_file - close open file
 * @fd: file description of the file needed to be closed
 *
 * Return: nothing
 */
void close_file(int fd)
{
	int fd_close;

	fd_close = close(fd);

	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

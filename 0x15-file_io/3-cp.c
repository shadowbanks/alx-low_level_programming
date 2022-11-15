#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * open_fileFrom - opens file to read from
  * @file: file path/file name
  *
  * Return: file descriptor
  */

int open_fileFrom(char *file)
{
	int fd, file_fromLen;

	fd = open(file, O_RDONLY);

	if (fd == -1)
	{
		write(2, "Error: Can't read from file ", 28);
		file_fromLen = strlen(file);
		write(2, file, file_fromLen);
		write(2, "\n", 1);
		exit(98);
	}

	return (fd);
}

/**
  * open_fileTo - opens file to read from
  * @file: file path/file name
  *
  * Return: file descriptor
  */

int open_fileTo(char *file)
{
	int fd, file_toLen;

	fd = open(file, O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd == -1)
	{
		write(2, "Error: Can't write to ", 22);
		file_toLen = strlen(file);
		write(2, file, file_toLen);
		write(2, "\n", 1);
		exit(99);
	}

	return (fd);
}

/**
  * close_file - close file and check if it was successful
  * @fd: file descriptor to close
  * @fdChar: fd (int to char)
  *
  * Return: 0 if successful, -1 otherwise
  */

int close_file(int fd, char fdChar)
{
	int cFile;

	cFile = close(fd);

	if (cFile != 0)
	{
		write(2, "Error: Can't close fd ", 22);
		write(2, &fdChar, 1);
		write(2, "\n", 1);
		return (-1);
	}

	return (0);
}

/**
  * main - copy content of a file
  * @ac: number of arguments
  * @av: takes file names
  *
  * Return: 0 on success
  */

int main(int ac, char **av)
{
	int fd, fd2, fdTemp, closeF, rd, chk;
	char fdChar, fd2Char;
	char *ch;

	if (ac > 3 || ac < 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd = open_fileFrom(av[1]);

	fd2 = open_fileTo(av[2]);

	fdChar = fd + 49;
	fd2Char = fd2 + 49;

	ch = malloc(1024);

	while (rd != 0)
	{
		rd = read(fd, ch, 1024);

		fdTemp = open(av[2], O_WRONLY | O_APPEND);

		write(fdTemp, ch, rd);
		close(fdTemp);
	}


	closeF = close_file(fd, fdChar);
	if (closeF != 0)
		exit(100);

	closeF = close_file(fd2, fd2Char);
	if (closeF != 0)
		exit(100);

	return (0);
}

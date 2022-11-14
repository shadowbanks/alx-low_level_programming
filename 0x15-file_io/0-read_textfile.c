#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
  * read_textfile - Read a text file
  * @filename: file path
  * @letters: bytes to be printed/read
  * Return: bytes read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	int fd, rd;
/*check if filename is empty*/
	if (filename == NULL)
		return (0);
/*open the file*/
	fd = open(filename, O_RDONLY);
/*check if opening file was successful*/
	if (fd == -1)
		return (0);
/*create memory in heap for the required number of bytes*/
	ch = malloc(letters + 1);
/*check if memory was created successfully*/
	if (ch == NULL)
		return (0);
/*read the file(fd) into heap memory created(ch), (letters) amount of byte*/
	rd = read(fd, ch, letters);

/*NULL terminate the read file*/
	ch[rd] = '\0';
/*write the read file to stdout*/
	write(1, ch, rd);
	close(fd);

	return (rd);
}

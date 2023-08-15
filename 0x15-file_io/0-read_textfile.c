#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and print to stdout
 * @filename: the file to read
 * @letters: letters to be read
 * Return: w- exact number of bytes read and printed
 *        0 when it fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}

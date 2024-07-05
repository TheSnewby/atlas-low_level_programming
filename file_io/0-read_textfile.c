#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters to read and print. letters or chars?
 *
 * Return: num of letters read & print, 0 if cannot open or read,
 * 0 if filename is null, 0 if write fails or writes a different
 * than expected amount
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = NULL;
	int read_return;
	int write_return;

	buf = malloc(letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_return = read(fd, buf, letters);
	if (read_return != (int)letters)
		return (0);
	write_return = write(1, buf, letters);
	if (write_return != (int)letters)
		return (0);
	close(fd);
	return (letters);
}

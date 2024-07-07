#include "main.h"

/**
 * cp_exit - handles errors and closes fds
 * @fd_from: source fd
 * @fd_to: target fd
 * @error_no: error number if applicable
 * @name: name of file if applicable
 *
 * Return: void
 */

void cp_exit(int fd_from, int fd_to, int error_no, char *name)
{
	int close_return;
	/* prints the error messages and exits program if closing FDs is unecessary */
	if (error_no == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (error_no == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		if (fd_to == 0)
			exit(98);
	}
	else if (error_no == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
	/* attempts to close open FDs */
	if (fd_from >= 0)
	{
		close_return = (fd_from);
		if (close_return < 0)
		{
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
	}
	if (fd_to >= 0)
	{
		close_return = (fd_to);
		if (close_return < 0)
		{
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
	}
	if (error_no == 98) /* exits program according to error number */
		exit(98);
	else if (error_no == 99)
		exit(99);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if success
 * exit 97 if number of arugments is incorrect
 * exit 98 if file_from does not exist or cannot be read
 * exit 99 if cannot create or write to file_to
 * exit 100 if cannot close a file descriptor
 */

int main(int argc, char *argv[])
{
	int fd_from; /* fd for file_from */
	int fd_to; /* fd for file_to */
	int read_return = 1; /* non-zero initial value */
	int write_return; /* records return value of write_return */
	char *file_from; /* filename of file_from */
	char *file_to; /* filename of file_to */
	char buf[1024]; /* buffer */

	if (argc != 3) /* incorrect number of args */
		cp_exit(0, 0, 97, NULL);

	/* assigns names from passed arguments */
	file_from = argv[1];
	file_to = argv[2];

	/* opens files and assigns an fd. error if failed to open */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
		cp_exit(fd_from, 0, 98, file_from);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0666);
	if (fd_to < 0)
		cp_exit(fd_from, fd_to, 99, file_to);

	/* reads from fd_from until EOF (read_return == 0), exits if r/w error */
	while (read_return)
	{
		read_return = read(fd_from, buf, 1024);
		if (read_return < 0)
			cp_exit(fd_from, fd_to, 98, file_from);

		write_return = write(fd_to, buf, read_return);
		if (write_return < 0 || write_return != read_return)
			cp_exit(fd_from, fd_to, 99, file_to);
	}

	/* closes FDs */
	cp_exit(fd_from, fd_to, 0, NULL);

	return (0); /* big success */
	}

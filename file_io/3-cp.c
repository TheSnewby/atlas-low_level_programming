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

	if (error_no == 97)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (error_no == 98)
		dprintf(2, "Error: Can't read from file %s\n", name);
	else if (error_no == 99)
		dprintf(2, "Error: Can't write to %s\n", name);

	close_return = (fd_from);
	if (close_return < 0)
	{
		close(fd_to);
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_return = (fd_to);
	if (close_return < 0)
	{
		close(fd_to);
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (error_no == 98)
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
	int fd_from;
	int fd_to;
	int read_return = 1; /* non-zero initial value */
	int write_return;
	char *file_from;
	char *file_to;
	int close_return;
	char buf[1024];

	if (argc != 3)
		cp_exit(0, 0, 97, NULL);

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
		cp_exit(fd_from, fd_to, 98, file_from);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0700);
	if (fd_to < 0)
		cp_exit(fd_from, fd_to, 99, file_to);

	while (read_return)
	{
		read_return = read(fd_from, buf, 1024);
		if (read_return < 0)
			cp_exit(fd_from, fd_to, 98, file_from);

		write_return = write(fd_to, buf, read_return);
		if (write_return < 0 || write_return != read_return)
			cp_exit(fd_from, fd_to, 99, file_to);
	}

	cp_exit(fd_from, fd_to, 0, NULL);

	return (0);
	}

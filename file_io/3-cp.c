#include "main.h"

int _exit(int fd_from, int fd_to, int error_message)
{
	int close_return;

	/* practice with switches? */
	if (error_message == 97)
		dprint ...
	else if (error_message == 98)
		dprint ...
	else if (error_message == 99)
		dprint ...
	else
		dprint ...

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
	int read_return = 1;
	int write_return;
	char *file_from;
	char *file_to;
	int close_return;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0700);
	if (fd_to < 0)
	{
		close(fd_from);
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while (read_return)
	{
		read_return = read(fd_from, buf, 1024);
		if (read_return < 0)
		{
			close(fd_from);
			close(fd_to);
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		write_return = write(fd_to, buf, read_return);
		if (write_return < 0 || write_return != read_return)
		{
			close(fd_from);
			close(fd_to);
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

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

	return (0);
	}

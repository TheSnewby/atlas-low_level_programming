#include "main.h"

/**
 * create_file - creates a file and populates it with a string
 * @filename: name of file
 * @text_content: string to initially populate file
 *
 * Return: 1 on success, -1 on failure(file cannot be created,
 * cannot be written, write fails, etc), -1 filename being NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_return;
	int text_content_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT);
		if (fd < 0)
			return (-1);
		return (1);
	}

	while (text_content[text_content_size])
	{
		text_content_size++;
	}

	fd = open(filename, O_CREAT | O_WRONLY);
	if (fd < 0)
		return (-1);
	write_return = write(fd, text_content, text_content_size);
	if (write_return != text_content_size)
		return (-1);
	close(fd);
	return (1);
}

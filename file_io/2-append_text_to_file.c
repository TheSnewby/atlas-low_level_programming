#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: text to be appended
 *
 * Return: 1 if succes, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_return;
	int text_content_size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[text_content_size])
		text_content_size++;

	write_return = write(fd, text_content, text_content_size);
	if (write_return != text_content_size)
		return (-1);

	return (1);
}

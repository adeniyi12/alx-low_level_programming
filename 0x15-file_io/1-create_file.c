#include "main.h"

/**
 * create_file -creates an array of chars, and initializes
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 * Return: 1 on success, -1 on failure
*/

#include "main.h"

int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	int len = 0;

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	ssize_t bytes_written = write(fd, text_content, len);

	close(fd);

	return ((bytes_written == len) ? 1 : -1);
}

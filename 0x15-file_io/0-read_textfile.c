#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * @filename: A pointer to the name of the file
 * @letters: letters to be read and printed
 * Return: 0 if function fails or otherwise
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char buffer[1024];
	ssize_t t = 0;
	ssize_t c = 0;

	while (t < letters && (c = read(fd, buffer, sizeof(buffer))) > 0)
	{
		ssize_t w = write(STDOUT_FILENO, buffer, (c > letters - t) ? letters - t : c);

		if (w == -1 || w != c)
		{
			close(fd);
			return (0);
		}
		total += written;
	}

	close(fd);
	return (total);
}

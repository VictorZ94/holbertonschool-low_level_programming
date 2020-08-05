#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - file to append text to the end of a file
 * @filename: pathname
 * @text_content: numbers of a character to save
 *
 * Return: 1 on success, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw;
	int counter;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	counter = 0;
	while (text_content[counter])
		counter++;

	fdw = write(fd, text_content, counter);
	if (fdw == -1)
		return (-1);

	close(fd);
	return (1);
}

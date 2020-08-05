#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read and print it filename
 * @filename: pathname
 * @letters: numbers of a character to save
 *
 * Return: what it read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdr, fdw;
	char *buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fdr = read(fd, buf, letters);
	if (fdr == -1)
		return (0);

	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fdw == -1)
		return (0);

	close(fd);

free(buf);
return (fdr);
}

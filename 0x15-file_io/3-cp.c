#include "holberton.h"

/**
 * main - Enter point with arguments to main.
 * @argc: counter of arguments
 * @argv: doble pointer to pointer
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_content(argv[1], argv[2], argv);
	return (0);
}
/**
 * copy_content - copy content of a file in another.
 * @file_from: pathname of a first file
 * @file_to: file of destine
 * @argv: doble pointer to pointer
 *
 * Return: 1 on success, otherwise -1.
 */
ssize_t copy_content(const char *file_from, const char *file_to, char **argv)
{
	int fd1, fd2, fdr, fdw;
	char BUF[1024];

	if (!file_from)
		return (-1);

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((fdr = read(fd1, BUF, 1024)) != '\0')
	{
		fdw = write(fd2, BUF, fdr);
		if (fdw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (fdr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);

	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);

	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	return (1);
}

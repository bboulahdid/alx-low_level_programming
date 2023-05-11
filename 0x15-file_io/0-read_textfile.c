#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 *
 * @filename: the file name
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file_content;
	ssize_t fd, r, w;

	if (filename == NULL)
		return (0);

	file_content = malloc(sizeof(char) * letters);
	if (file_content == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, file_content, letters);
	w = write(STDOUT_FILENO, file_content, r);

	free(file_content);
	close(fd);

	if (r == -1 || w == -1)
		return (0);

	return (w);
}


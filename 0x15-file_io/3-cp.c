#include "main.h"

/**
 * close_fd - close a file descriptor
 *
 * @fd: the file descriptor
 *
 * Return: void
 */
void close_fd(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of arguments (should be exactly 3)
 * @argv: arguments values (the cmd, "from" file & "to" file)
 *
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	r = read(from_fd, buffer, 1024);
	while (r != 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(to_fd, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(from_fd, buffer, 1024);
	}
	close_fd(from_fd);
	close_fd(to_fd);
	return (0);
}


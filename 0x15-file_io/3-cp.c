#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - checks the code
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res = 0;
	int fd_to;
	int fd_from;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(1);
	}

	if (!av[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (!fd_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	read(fd_from, buf, 1024);
	res += write(fd_to, buf, 1024);
	if (!close(fd_from))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (!close(fd_to))
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_to);
		exit(100);
	}
	return (0);
}

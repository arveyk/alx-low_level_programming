#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - copies a files contents into another
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int b_read = 0, b_write;
	int nb = 0;
	int fd_to;
	int fd_from;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (b_read != 0)
	{
		b_read = read(fd_from, buf, 1024);
		if (b_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[2]);
			exit(98);
		}
		b_write = 0;
		do
		{
			nb += write(fd_to, &buf[b_write], b_read - b_write);
			if (nb < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
			b_write += nb;
		} while (b_write < b_read);
	}
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

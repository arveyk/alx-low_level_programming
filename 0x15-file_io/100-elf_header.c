#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * main - reads the contents of an elf file
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd;
	int f = 96;
	char buf[96];

	if (ac != 3)
		exit(98);
	fd = open(av[2], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "%s is not an ELF file", av[2]);
		exit(98);
	}
	lseek(fd, (long) f, L_SET);
	read(fd, buf, 96);
	write(1, buf, 96);
	close(fd);

	return (0);
}

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
	int ch_read;
	int ch_wr;
	char buf[64];

	if (ac != 2)
	{
		dprintf(2, "Usage: %s elf_file\n", av[0]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "%s is not an ELF file\n", av[1]);
		exit(98);
	}
	lseek(fd, 51, SEEK_SET);
	ch_read = read(fd, buf, 64);
	if (ch_read <= 0)
		printf("Could not read from file %s\n", av[1]);
	ch_wr = write(1, buf, 64);
	if (ch_wr <= 0)
		printf("Error: Couldn't write\n");
	if (!close(fd))
		printf("Error: Can't close file\n");
	return (0);
}

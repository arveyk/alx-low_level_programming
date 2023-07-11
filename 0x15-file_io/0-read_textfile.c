#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: name of the file
 * @letters: number of letters to be read
 *
 * Return: number of letters read ad printed, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t count = 0;
	int fd;
	size_t ext = 0;
	char buff[720];

	if (filename == NULL)
		return (0);
	while (ext < 720)
		buff[ext] = 'a';
	ext = 0;
	fd = open(filename, O_RDONLY);

	read(fd, buff, letters);
	while (buff[ext] != '\0' && ext < letters)
	{
		count += write(1, &buff[ext], 1);
		ext++;
	}
	close(fd);
	if (count <= 0)
		return (0);
	return (count);
}

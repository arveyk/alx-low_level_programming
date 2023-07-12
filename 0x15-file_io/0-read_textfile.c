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
	int fd, ch_read;
	size_t ext = 0;
	char buf[BUF_S];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (ext < BUF_S)
	{
		buf[ext] = 'a';
		ext++;
	}
	ext = 0;
	while (ext < letters && ch_read != 0)
	{
		ch_read = read(fd, buf, BUF_S);
		if (ch_read < 0)
			return (-1);
		if ((size_t)ch_read <= letters)
		{
			count += write(1, buf, ch_read);
			ext += ch_read;
		}
		else
		{
			count += write(1, buf, letters);
			ext += ch_read;
			break;
		}
	}
	close(fd);
	return (count);
}

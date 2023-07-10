#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file with given permissions
 * @filename: name of file to create
 * @text_content: Null terminated text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytez;
	int count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content == NULL)
		return (1);
	bytez = 0;
	while (text_content[bytez] != '\0')
	{
		count = write(fd, &text_content[bytez], 1);
		bytez++;
	}
	close(fd);
	return (count);
}

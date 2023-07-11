#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - adds text to end of a file
 * @filename: name of file to append
 * @text_content: string to append to end of file
 *
 * Return: 1 if successfull, -1 if error occurs
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int ext = 0;
	int count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = strlen(text_content);
	while (text_content[ext] != '\0' && ext < len)
	{
		count += write(fd, &text_content[ext], 1);
		ext++;
	}
	if (count < 0)
		return (-1);
	return (count);

}

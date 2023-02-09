#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - adds text at end of a file
 * @filename: name of file to be  appended
 * @text_content: text to be added
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	FILE *ptr = fopen(filename, "wa");
	int e = (int)*text_content;

	if (filename == NULL)
		return (-1);
	if (!ptr && text_content == NULL)
		return (1);

	while (e--)
	{
		if (!(write(e, text_content, sizeof(text_content))))
			return (-1);
	}
	fclose(ptr);

	return (1);

}

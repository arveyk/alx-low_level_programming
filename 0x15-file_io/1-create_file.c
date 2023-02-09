#include <stdio.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to be added to the file.
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	FILE *ptr;
	
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		ptr = fopen(filename, "wr");
		if (!ptr)
			return (-1);
	}

	ptr = fopen(filename, "w");
	if (ptr == NULL)
		return (-1);
	return (1);
}

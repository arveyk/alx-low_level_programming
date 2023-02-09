#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

/**
 * read_text_file - reads a text file and prints stdout
 * @filename: pointer to the file
 * @letter: size of letter to be read and printed
 *
 * Return 0 if file cannot be opened or read,
 * if filname = NULL, write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	FILE* ptr = fopen(filename, "r");
	
	if (ptr == NULL)
		return (0);
	if (filename == NULL)
		return (0);	
	if (write(1, ptr, letters) == -1)
		return (0);
	fclose(ptr);
	return (0);

}

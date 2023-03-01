#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints stdout
 * @filename: pointer to the file
 * @letters: size of letter to be read and printed
 *
 * Return: 0 if file cannot be opened or read,
 * if filname = NULL, write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	FILE *ptr = fopen(filename, "r");
	ssize_t count;

	if (ptr == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	count = write(1, ptr, letters);
	if (count == -1)
		return (0);
	fclose(ptr);
	return (count);

}

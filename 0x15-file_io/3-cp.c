#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * main - copies contents of one file onto another
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{

	FILE *file_from, *file_to;
	int buff = 1024;
	int count = 0;
	char ch, *file1 = NULL, *file2 = NULL;


	if (argc !=2)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	file1 = "./file_from";
	file2 = "./file_to";

	file_from = open(file1, O_RDONLY);
	file_to = open(file2, O_APPEND);

	ch = file1;
	while (file_from)
	{

		if (count > buff)
			printf("\n");
		fputc(ch, file_to);
		ch = file_from;
	}
	fclose(file_from);
	fclose(file_to);


	return (0);
}

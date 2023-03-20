#include <stdio.h>

/**
 * main - prints its opcode
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	FILE *fp = NULL;
	 fp = fopen(100-main_opcode.c, "r");
	 
	 while ((c = getc(fp)) != EOF)
		 putchar(c);
	 fclose(fp);

	return (0);
}

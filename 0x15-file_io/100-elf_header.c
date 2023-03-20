#include <stdio.h>
#include <string.h>
#include <unistd.h>

void disp_elf(const char *elf);

int main(void)
{

	disp_elf("elf_filename");
	return (0);
}
void disp_elf(const char *elf_filename)
{

	FILE *file = fopen(elf_filename, "rb");
	if (file)
	{
		write(1, file, 1);
	}
		fclose(file);
}

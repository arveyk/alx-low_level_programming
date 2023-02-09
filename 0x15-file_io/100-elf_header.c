#include <elf.h>
#include <stdio.h>
#include <string.h>

#if defined(__LP64__)
#define Elfw(type) Elf64_
#else
#define Elfw(type) Elf32_
#endif

void read_elf_header(const char *elf_filename)
{

	Elfw(Ehdr) header;
	FILE *file = fopen(elf_filename, "rb");
	if (file)
	{
	
		fread(&header, sizeof(header), 1, file);
		if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
		{
		}
		fclose(file);
	}


}

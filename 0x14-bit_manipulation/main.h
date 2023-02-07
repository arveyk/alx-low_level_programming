#ifndef MAIN_H
#define MAIN_H

/**
 * struct binary  - structure to store the binary form of a number
 * @a: Array to store the binary
 *
 * Description: binary structure
 */

typedef struct binary
{

	unsigned short int a[32];
} bin_rep;

int _putchar(char c);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif

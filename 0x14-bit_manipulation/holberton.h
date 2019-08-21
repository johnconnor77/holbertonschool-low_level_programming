#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_endianness(void);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif

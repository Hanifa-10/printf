#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
/**
* struct fmt - function to check for formats
* @type: the format to print
* @f: the print function to use
*/
typedef struct format
{
char *type;
int (*f)(va_list);
} fmt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_per(va_list args);
int print_int(va_list args);
int print_Int(va_list args);
int print_bin(va_list args);
int print_unsigned(va_list args);
char *convert(long int num, int base);
int print_oct(va_list args);
int print_hex(va_list args);
int print_Hex(va_list args);
int _pow(int x, int y);
int rot13(va_list args);
double sqrt(double n);

#endif

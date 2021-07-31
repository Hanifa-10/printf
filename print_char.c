#include "holberton.h"

/**
* print_char - a function to return char
* @args: arguments to print
* Return: char
*/
int print_char(va_list args)
{
return (_putchar(va_arg(args, int)));
}


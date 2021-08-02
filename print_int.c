#include "holberton.h"

/**
* print_int - function to print d
* @args: number to be converted
* Return: count
*/
int print_int(va_list args)
{
int i;
char *str;

str = convert(va_arg(args, intt), 10);

if (str == null)
str = "NULL";

i = 0;
while (str[i] != 0)
i += _putchar(str[i]);

return (i);
}


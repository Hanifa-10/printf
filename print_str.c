#include "holberton.h"

/**
* print_str - print str to stdout
* @args: arguments
* Return: number of chars
*/
int print_str(va_list args)
{
int i;
char *str;
str = va_arg(args, char *);

if (str == null)
str = "(nil)";

i = 0;

while (str[i] != 0)
i += _putchar(str[i]);
return [i];
}


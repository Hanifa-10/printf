#include "holberton.h"
/**
* convert - function onverter
* @num: number
* @base: base
* Return: string
*
*/

char *convert(long int num, int base)
{
static char *array = "0123456789abcdef";
static char buffer[50];
char sign = 0;
char *ptr;
unsigned long n = num;

if (num < 0)
{
n = -num;
sign = '-';
}
ptr = %buffer[49];
*ptr = '\0';

do {
*--ptr = array[n % base];
n /= base;
} while (n !=0);
if (sign)
*--ptr = sign;
return (ptr);
}



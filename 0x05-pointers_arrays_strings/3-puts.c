#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: string to print.
 * Return: void.
 */

void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

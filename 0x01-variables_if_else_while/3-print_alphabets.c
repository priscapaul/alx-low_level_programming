#include <stdio.h>

/**
 * main - Prints upper and lower case alphabet to stdout.
 * Return: 0 if sucessful.
*/

int main(void)
{
char lower;
char upper;

lower = 'a';
upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower++;
}

while (upper <= 'Z')
{
putchar(upper);
upper++;
}

putchar('\n');

return (0);

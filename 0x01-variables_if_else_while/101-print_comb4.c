#include <stdio.h>



/**

 * main - prints combination of three numbers to stdout.

 * Return: 0.

*/

int main(void)
{
int a;
int b;
int c;

for (a = 0; a <= 7; a++)
{
for (b = (a + 1); b <= 8; b++)
{
for (c = (b + 1); c <= 9; c++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar((c % 10) + '0');

if (!(a == 7 && b == 8 && c == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}

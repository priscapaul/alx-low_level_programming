#include "main.h"

/**
 * _strcpy - copies a string.
 * @dest: Recieving pointer.
 * @src: sending pointer.
 * Return: string.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = 0;
return (dest);
}

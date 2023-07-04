#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where stored
 * @src: memory whre copied
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

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
	int r = 0;
	int i = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

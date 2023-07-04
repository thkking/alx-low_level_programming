#include "main.h"

/**
 * _memset -  function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes tobe changed
 *
 * Return a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

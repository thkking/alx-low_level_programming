#include <stdio.h>
#include <stdlib.h>

/**
 * main - function returns alphabets
 *
 * Return: 0 if success.
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

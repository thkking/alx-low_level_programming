#include <stdio.h>
#include <stdlib.h>
/**
 * main - function returns alphabets both lower and upper cases
 *
 * Return: 0 if success
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
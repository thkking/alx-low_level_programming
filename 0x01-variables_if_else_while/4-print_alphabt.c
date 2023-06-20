#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns aphabets both except eand q
 *
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

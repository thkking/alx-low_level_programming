#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets in lowercase
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

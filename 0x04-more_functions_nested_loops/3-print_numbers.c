#include "main.h"
#include <unistd.h>
#include<stdio.h>

/**
 * print_numbers - Print the numbers 0 up to 9
 * Return: The numbers 0 upto 9
 */

void print_numbers(void)

{
int x;

for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}

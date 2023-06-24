#include "main.h"
/**
 * print_square - Prints n squares according n times
 * @size: The number of square/number of times
 * Return: empty
 */

void print_sqaure(int size)
{
int x;
int y;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putcharr(35);
}
_putchar('\n');
}
}
}

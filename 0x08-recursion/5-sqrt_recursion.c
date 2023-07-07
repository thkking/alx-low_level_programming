#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * actual_sqrt_recursion - returns the
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
int actual_sqrt_recursion(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (actual_sqrt_recursion(n, i + 1));
}

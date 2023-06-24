#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * main - Print the largest prime factor of 612852475143
 * Return: 0 if success
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}

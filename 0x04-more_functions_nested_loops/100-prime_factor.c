#include <stdio.h>
#include <math.h>

/**
 * main - Print the largest prime factor 612852475143
 * Return: 0 if success
 */

int main(void)
{
	long x;
	long maxf;
	long number = 612852475143;
	double square = sqrt(number);

		for (x = 1; x <= square; x++)
		{
			if (number % x == 0)
			{
				maxf = number / x;
			}
		}
	printf("%d\n", maxf);
	return (0);
}

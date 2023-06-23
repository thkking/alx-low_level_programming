#include <stdio.h>
/**
 * main - Prints the sumof all multiples of 3 or 5 upto 1024
 * Return: 0 if success
 */

int main(void)
{
	int i = 0;
	int z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}

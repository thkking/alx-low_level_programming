#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 if success.
 */

int main(void)
{

int num;

while (num < 10)
{
printf("%d", num);
num += 1;
}
printf("\n");
return (0);
}

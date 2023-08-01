#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 if success
 */

int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

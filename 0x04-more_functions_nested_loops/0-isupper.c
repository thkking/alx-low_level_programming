#include "main.h"
/**
 * _isupper - Checks if a is uppercase
 * @x: The number to be checked
 * Return: 1 for uppercase or 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
} 

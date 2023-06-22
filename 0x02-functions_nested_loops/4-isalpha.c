#include "main.h"
/**
 * _isalpha - shCheck for alphabet character *
 * @c: The character in ASCII code *
 * Return:1 for alphabet character 0 for the rest.
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}

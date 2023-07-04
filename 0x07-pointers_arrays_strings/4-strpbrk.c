#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: 0 if success
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *p = accept;
while (*p)
{
if (*s == *p)
return s;
p++;
}
s++;
}
return (0);
}

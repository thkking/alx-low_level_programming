#include "main.h"
/**
 * wildcmp - Ccompare strings
 * @s1: pointer to string parameters
 * @s2: pointer to string parameters
 * Return: 0 if success
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
if (*s1 == *s2 || *s2 == '*')
{
if (wildcmp(s1 + 1, s2 + 1))
return (1);
if (*s2 == '*' && wildcmp(s1, s2 + 1))
return (1);
}
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}

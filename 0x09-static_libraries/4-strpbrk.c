#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - prints the consecutive characters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}
return ('\0');
}


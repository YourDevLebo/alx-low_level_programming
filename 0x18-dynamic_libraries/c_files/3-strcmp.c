#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first str to compare
 * @s2: second str to compare
 * Return: 0 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

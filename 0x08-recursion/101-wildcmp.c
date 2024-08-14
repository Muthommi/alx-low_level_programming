#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they are identical
 * @s1: The first string
 * @s2: Second string which can contain the special character
 *
 * Return: ! if strings are identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0' || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

#include "main.h"

/**
 * _puts_recursion - function that prints a string foloowed by a new line
 * @s: parameter 1
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

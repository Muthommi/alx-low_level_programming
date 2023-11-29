#include "function_pointers.h"
/**
 * print_name - funtion printing a name
 *
 * @f: variable holding the string name
 * @name: person's name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

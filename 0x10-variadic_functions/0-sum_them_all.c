#include "variadic_functions.h"
/**
 * sum_them_all - sum of the numbers
 * @n: arguments passed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list hold;

	va_start(hold, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(hold, const unsigned int);
		}
	}
	va_end(hold);
	return (sum);
}

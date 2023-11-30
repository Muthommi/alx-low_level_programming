#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format : the argument specifier
 *
 * Return: any argument given
 */

void print_all(const char * const format, ...)
{
	int i, check_stat;
	char *str;
	va_list k;

	va_start(k, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(k, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(k, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(k, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(k, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(k);
}

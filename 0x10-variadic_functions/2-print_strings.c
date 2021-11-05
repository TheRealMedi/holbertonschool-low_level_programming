#include "variadic_functions.h"
/**
 * print_strings - Functions that prints strings
 * Return: Void
 * @separator: constant pointer
 * @n: number of params of unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int c;
	va_list params;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(params, n);
	for (c = 0; c < n; c++)
	{
		p = va_arg(params, char *);
		if (p == NULL)
		{
			p = "(nil)";
		}
		printf("%s", p);
		if (c != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(params);
	printf("\n");
}

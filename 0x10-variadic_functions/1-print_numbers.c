#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: Pointer to char
 * @n: number of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list params;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(params, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(params, int));
		if (c != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(params);
	printf("\n");
}

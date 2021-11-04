#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: Number of params of U-int type
 * Return: adds result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int c;
	unsigned int sum = 0;
	va_list params;

	if (n == 0)
	{
		return (0);
	}
	va_start(params, n);
	for (c = 0; c < n; c++)
	{
		sum = sum + va_arg(params, int);
	}
	va_end(params);
	return (sum);
}

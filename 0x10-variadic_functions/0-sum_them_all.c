#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that sum of all parameters
 * Return: 0 or sum result of the args
 * @n: Number of params of U-int type
 */
int sum_them_all(const unsigned int n, ...)
{

unsigned int c;
int sum = 0;

	va_list params;

	if (n == 0)
	{
		return (0);
	}

	va_start(params, n);

	for (c = 0; c < n; c++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);
	
return (sum);
}

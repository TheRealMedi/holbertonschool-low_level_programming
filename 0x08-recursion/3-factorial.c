#include "main.h"
/**
 * factorial - compute the fatorial of a number
 * @n: given int
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n > 1 ? n * factorial(n - 1) : 1);
}

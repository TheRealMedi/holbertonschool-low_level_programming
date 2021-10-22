#include "main.h"
/**
 * _xsqrt_recursion - compute the square root of a number
 * @n: given integer
 * @m: given integer
 * Return: the current divisor to test
 */
int _xsqrt_recursion(int n, int m)
{
	if (m * m < n)
		return (_xsqrt_recursion(n, m + 1));
	return (m * m == n ? m : -1);

}

/**
 * _sqrt_recursion - compute the square root of a number
 * @n: geiven integer
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_xsqrt_recursion(n, 0));
}

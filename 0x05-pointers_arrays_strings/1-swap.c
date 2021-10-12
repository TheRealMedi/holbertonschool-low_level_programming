#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * Return: void
 * @a: given value
 * @b: given value
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

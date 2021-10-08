#include "main.h"
/**
 * _isupper - checks for uppercase character
 * Return: returns 1 or 0
 * @c: given value
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
return (0);
}

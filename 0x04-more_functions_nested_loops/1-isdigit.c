#include "main.h"
/**
 * _isdigit - checks for a digit between 0 through 9
 * Return: returns 1 or 0
 * @c: Given value
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
return (0);
}

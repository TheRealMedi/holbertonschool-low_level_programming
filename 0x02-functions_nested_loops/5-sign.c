#include "main.h"
/**
* print_sign - Prints the sign of a number
* @n: value to evaluate its sign
* Return: zero, one or minus depending from the given number
*/
int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar("+");
result = 1;
}
else if (n == 0)
{
_putchar("0");
result = 0;
}
else if (n < 0)
{
_putchar("-");
result = -1;
}
return (result);
}

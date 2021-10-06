#include "main.h"
/**
* print_last_digit - 
* 
* 
*/
int print_last_digit(int ld)
{
int result;
if (ld >= 0)
{
result = (ld % 10);
_putchar(48 + result);
}
else
{
result = (ld % 10);
result = -result;
_putchar(48 + result);
}
return (result);
}

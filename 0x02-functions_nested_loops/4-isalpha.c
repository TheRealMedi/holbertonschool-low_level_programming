#include "main.h"
/**
 * isalpha.c - Checks that for alphabetic character
 * Return; Zero/one
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

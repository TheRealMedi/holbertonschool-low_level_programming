#include "main.h"
/**
* _islower - checks for lowercase letters
* Return: zero/one
* @c: character to evaluate
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

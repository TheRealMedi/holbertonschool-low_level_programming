#include "main.h"
/**
 * _puts_recursion - 
 * @s:
 * Return:
 */
void _puts_recursion(char *s)
{
    int a = 0;

    if (s[a] != '\0')
    {
        putchar(s[a]);
        a++;
        _puts_recursion(s +1);
    }
    else
        putchar('\n');
}
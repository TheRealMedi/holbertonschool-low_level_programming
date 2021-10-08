#include "main.h"
/**
 * print_line - draws a strigh line in the terminal
 * Return: void
 * @n: given number
 */
void print_line(int n)
{
int a = 0;

if (n != 0)
{
for (; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
else
_putchar('\n');
}

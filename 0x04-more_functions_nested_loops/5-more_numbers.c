#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 10 to 14 making a rectangle shape.
 * Return: void
 */
void more_numbers(void)
{
int a = 0, b;

for (; a < 10; a++)
{
for (b = 0; b <= 14; b++)
{
if (b >= 10)
{
_putchar('0' + b / 10);
}
_putchar('0' + b % 10);
}
_putchar('\n');
}
}
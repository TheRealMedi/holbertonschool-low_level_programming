#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9.
 * Return: void
 */
void print_most_numbers(void)
{
int a = 48;

for (; a <= 57; a++)
{
if (a != 50 && a != 52)
{
_putchar(a);
}
}
_putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: Zero
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c < 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

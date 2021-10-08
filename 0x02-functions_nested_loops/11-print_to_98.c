#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d", n);
printf(",");
printf(" ");
n++;
}
}
if (n > 98)
{
while (n > 98)
{
printf("%d", n);
printf(",");
printf(" ");
n--;
}
}
else
printf("98\n");
}

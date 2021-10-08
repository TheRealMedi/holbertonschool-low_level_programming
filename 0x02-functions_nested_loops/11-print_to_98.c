#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: void
 * @n: Given value
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
if (n == 98)
{
printf("98\n");
}
}

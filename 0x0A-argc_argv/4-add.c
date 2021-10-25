#include "main.h"
/**
 * main - adds positive numbers.
 * Return: zero
 * @argc: count
 * @argv: vector
 */
int main(int argc, char *argv[])
{
int c = 0;
int a;
int b;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (isdigit(argv[a][b]) == 0)
{
printf("Error\n");
return (1);
}
}
}

for (a = 1; a < argc; a++)
{
c += atoi(argv[a]);
}
printf("%d \n", c);
return (0);
}

#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * Return: zero
 * @argc: count
 * @argv: vector
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[0]);
return (0);
}

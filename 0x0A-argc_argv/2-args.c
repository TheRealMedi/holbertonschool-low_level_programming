#include "main.h"
/**
 * main - that prints all arguments it receives.
 * Return: zero
 * @argc: count
 * @argv: vector
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s \n", argv[i]);
return (0);
}

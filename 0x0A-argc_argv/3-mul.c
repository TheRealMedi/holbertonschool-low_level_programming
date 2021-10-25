#include "main.h"
/**
 * main - multiplies two numbers.
 * Return: zero
 * @argc: count
 * @argv: vector
 */
int main(int argc, char *argv[])
{
int product;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}

product = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
return (0);
}

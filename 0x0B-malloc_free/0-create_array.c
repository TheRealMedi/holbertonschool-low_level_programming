#include "main.h"
/**
 * create_array - function that creates an
 * array of chars, and initializes it with a specific char.
 * @size: given value
 * @c: given value
 * Return: Pointer to a string of characters.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	p[i] = '\0';
	return (p);
}

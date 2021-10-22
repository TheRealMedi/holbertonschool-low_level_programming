#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer given
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	return (*s ? _strlen_recursion(s + 1) +  1 : 0);
}

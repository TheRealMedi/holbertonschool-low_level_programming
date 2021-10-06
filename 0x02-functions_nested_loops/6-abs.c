#include "main.h"
/**
* _abs - Calculates the absolute value of a integer number
* @av: Integer to calculate its absolute value
* Return: Value taken from av.
*/
int _abs(int av)
{
if (av > 0)
{
av = (av * (-1));
}
return (av);
}

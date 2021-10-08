#include "main.h"
/**
 * times_table - Prints the times table up to 9
 * Return: void
 */
void times_table(void)
{
    int a = 0, b = 0, c, d, e;
    for (; a < 10; a++)
    {
        for (; b < 10; b++)
        {
            c = a * b;
            d = c / 10;
            e = c % 10;

            if (b == 10)
                _putchar('0');
            else if (c < 10)
            {
                _putchar(' ');
                _putchar('0' + e);
            }
            else
            {
                _putchar('0' + d);
                _putchar('0' + e);
            }
            if (b < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
            else
            _putchar('\n');
        }
        
    }
    
}
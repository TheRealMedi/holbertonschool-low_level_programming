#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format: arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *args;
	char *esp = "";
	va_list params;

	va_start(params, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", esp, va_arg(params, int));
				break;
			case 'i':
				printf("%s%i", esp, va_arg(params, int));
				break;
			case 'f':
				printf("%s%f", esp, va_arg(params, double));
				break;
			case 's':
				args = va_arg(params, char *);
				if (args == NULL)
				{
					args = "(nil)";
				}
				printf("%s%s", esp, args);
				break;
			default:
				i++;
				continue;
			}
		esp = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(params);
}

#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list v;
	int n = 0, i = 0;
	char *s = ", ";
	char *str;

	va_start(v, format);

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			s = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(v, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(v, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(v, double), s);
			break;
		case 's':
			str = va_arg(v, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, s);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(v);
}

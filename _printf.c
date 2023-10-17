#include "main.h"

/**
 * _printf - a printf function for printing format specifiers
 * @format: strings to be printed and interpreted
 *
 * Return: the span of the format, or the newly derived format
 */

int _printf(char *format, ...)
{
	int span = 0, i = 0;
	va_list var_p;
	char a;
	int (*f_pt[])(va_list, char *) = {call_fmt_function};

	if (format == NULL)
		return (-1);

	va_start(var_p, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			span++;
			continue;
		}
		else
		{
			a = format[i + 1];
			if (a == '%')
			{
				_putchar('%');
				span++;
				i += 2;
				continue;
			}
			else
			{
				span += (*f_pt[0])(var_p, &a);
				i += 2;
				continue;
			}
		}
	}
	return (span);
	va_end(var_p);
}

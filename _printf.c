#include "main.h"

/**
 * _printf - function that print with outpu format
 * @format: is a character string
 * Return: the number of caracters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	format_t list[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_percent},
		{NULL, NULL}};
	int i, j, count = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			for (j = 0; list[j].id != NULL; j++)
			{
				if (format[i + 1] == *list[j].id)
					count += list[j].f(args);
			}
			i++;
		}
	}
	va_end(args);
	return (count);
}

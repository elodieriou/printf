#include "main.h"

/**
 * print_char - function that print a char
 * @args: variadic arguments
 * Return: 1
 */
int print_char(va_list args)
{
	int n;

	n = va_arg(args, int);
	_putchar (n);
	return (1);
}

/**
 * print_string - function that print a string
 * @args: variadic arguments
 * Return: the string
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar (str[i]);
	return (i);
}

/**
 * print_percent - function that print a percent
 * @args: variadic arguments
 * Return: a percent
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar ('%');
	return (1);
}

/**
 * print_number - function that print a number
 * @args: variadic arguments
 * Return: a number
 */
int print_number(va_list args)
{
	long int n = va_arg(args, int), div = 1;
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	num = n;
	while (num / (div * 10) >= 1)
		div *= 10;
	while (div >= 1)
	{
		count += _putchar(num / div + '0');
		num %= div;
		div /= 10;
	}
	return (count);
}

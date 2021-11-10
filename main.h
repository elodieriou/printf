#ifndef DEF_PRINTF
#define DEF_PRINTF
#include <stddef.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);

/**
 * struct format_printf - Struct that print a number
 * @id: the number's id
 * @f: the function associate
 */
typedef struct format_printf
{
	char *id;
	int (*f)(va_list args);
} format_t;
#endif

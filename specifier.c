#include "main.h"

/**
 * get_specifier - ...
 * @s: ...
 * Return: ...
 */
int (*get_specifier(char s))(va_list argumentToPrint, param_t *param)
{
	switch (s)
	{
	case 'c':
		return (print_char);
	case 's':
		return (print_string);
	case '%':
		return (print_percentage);
	case 'i':
		return (print_int);
	case 'd':
		return (print_int);
	case 'b':
		return (print_binary);
	case 'o':
		return (print_octal);
	case 'x':
		return (print_hex);
	case 'X':
		return (print_HEX);
	case 'u':
		return (print_unsigned);
	case 'S':
		return (print_s);
	default:
		return (NULL);
	}
}

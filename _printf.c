#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int characterCount = 0;
	va_list listOfArgument;

	va_start(listOfArgument, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 's':
				characterCount += printString(va_arg(listOfArgument, char *));
				format++;
				break;
			case 'c':
				characterCount += printChar(va_arg(listOfArgument, int));
				format++;
				break;
			default:
				putchar('%');
				characterCount++;
				format++;
				break;
			}
		}
		else
		{
			putchar(*format);
			characterCount++;
			format++;
		}
	}
	va_end(listOfArgument);
	return (characterCount);
}

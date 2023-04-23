#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int characterCount = 0;
	char *printString;
	char printChar;
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
				printString = va_arg(listOfArgument, char *);
				fputs(printString, stdout);
				characterCount += strlen(printString);
				format++;
				break;
			case 'c':
				printChar = va_arg(listOfArgument, int);
				putchar(printChar);
				characterCount++;
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

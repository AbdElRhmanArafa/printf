#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return:  the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	unsigned int countOfArgument = 0;
	unsigned int characterCount = 0;
	char *printString;
	char printChar;
	va_list listOfArgument;

	va_start(listOfArgument, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*format)
			{
			case 's':
				countOfArgument++;
				printString = va_arg(listOfArgument, char *);
				fputs(printString, stdout);
				characterCount += strlen(printString);
				format++;
				break;
			case 'c':
				countOfArgument++;
				printChar = va_arg(listOfArgument, char);
				putchar(printChar);
				characterCount++;
				format++;
				break;

			default:
				putchar('%');
				characterCount++;
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
	return (characterCount);
}

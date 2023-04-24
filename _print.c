#include "main.h"
/**
 * _printf - ...
 * @format: ...
 * Return: ...
 */
int _printf(const char *format, ...)
{
	int characterCount = 0;
	va_list listOfArgument;
	param_t paramters = INIT_PARAMS;
	spcifier_t sp_t;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	else if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(listOfArgument, format);
	while (*format != '\0')
	{
		init_params(&paramters);
		if (*format == '%')
		{
			/**block of code to add other modifiers*/
			format++;
			if (*format != '\0')
			{
				sp_t.f = get_specifier(*format);
				if (sp_t.f != NULL)
				{
					characterCount += sp_t.f(listOfArgument, &paramters);
				}
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			characterCount++;
			putchar(*format);
		}
	}
	va_end(listOfArgument);
	return (characterCount);
}

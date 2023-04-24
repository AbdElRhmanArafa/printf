#include "main.h"
/**
 * print_char - print char
 * @argumentToPrint: argument to print
 * @param: unused parameter
 * Return: length of output
 */
int print_char(va_list argumentToPrint, __attribute__((unused)) param_t *param)
{
	char charTest;

	charTest = va_arg(argumentToPrint, int);
	putchar(charTest);
	return (1);
}
/**
 * print_string - print string
 * @argumentToPrint: argument to print
 * @param: unused parameter
 * Return: length of output
 */
int print_string(va_list argumentToPrint,
		__attribute__((unused)) param_t *param)
{
	char *stringTest;

	stringTest = va_arg(argumentToPrint, char *);
	fputs(stringTest, stdout);
	return (strlen(stringTest));
}
/**
 * print_percentage - print percentage
 * @argumentToPrint: unused argument
 * @param: unused parameter
 * Return: length of output
 */
int print_percentage(va_list __attribute__((unused)) argumentToPrint,
			__attribute__((unused)) param_t *param)
{
	putchar('%');
	return (1);
}

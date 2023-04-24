#include "main.h"
/**
 * print_char - ....
 * @argumentToPrint: ...
 * @params: ...
 * Return: lenght
 */
int print_char(va_list argumentToPrint, param_t *param)
{
	putchar(va_arg(argumentToPrint, int));
	if (param->zeroFlag == 0)
		param->zeroFlag = 0;
	return (1);
}
/**
 * print_string - ...
 *  @argumentToPrint: ...
 * @params: ...
 * Return: lenght
 */
int print_string(va_list argumentToPrint, param_t *param)
{
	char *stringTest;

	stringTest = va_arg(argumentToPrint, char *);
	fputs(stringTest, stdout);
	if (param->zeroFlag == 0)
		param->zeroFlag = 0;
	return (strlen(stringTest));
}
/**
 * print_percentage - ...
 * @argumentToPrint: ...
 * @params: ...
 * Return: lenght
 */
int print_percentage(va_list argumentToPrint, param_t *param)
{
	putchar('%');
	return (1);
}

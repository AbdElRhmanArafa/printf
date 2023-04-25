#include "main.h"

/**
 * print_octal - Prints number in base 8
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: Number of characters printed
 */
int print_octal(va_list argumentToPrint,
		__attribute__((unused)) param_t *param)
{
	unsigned int num = va_arg(argumentToPrint, unsigned int);
	char *octalNum;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	octalNum = convert_base(num, 8, 0);

	if (octalNum == NULL)
		return (-1);

	count = _puts(octalNum);
	free(octalNum);

	return (count);
}

/**
 * print_hex - Prints hexadecimal in lowercase
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: Number of characters printed
 */
int print_hex(va_list argumentToPrint, __attribute__((unused)) param_t *param)
{
	unsigned int num = va_arg(argumentToPrint, unsigned int);
	char *hexNum;
	int count = 0;

	hexNum = convert_base(num, 16, 0);

	if (hexNum == NULL)
		return (-1);

	count = _puts(hexNum);
	free(hexNum);

	return (count);
}

/**
 * print_HEX - Prints hexadecimal in uppercase
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: Number of characters printed
 */
int print_HEX(va_list argumentToPrint, __attribute__((unused)) param_t *param)
{
	unsigned int num = va_arg(argumentToPrint, unsigned int);
	char *hexNum;
	int count = 0;

	hexNum = convert_base(num, 16, 1);

	if (hexNum == NULL)
		return (-1);

	count = _puts(hexNum);
	free(hexNum);

	return (count);
}

/**
 * print_unsigned - Prints unsigned integer
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list argumentToPrint,
			__attribute__((unused)) param_t *param)
{
	unsigned int num = va_arg(argumentToPrint, unsigned int);
	char *unsignedNum;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	unsignedNum = convert_base(num, 10, 0);

	if (unsignedNum == NULL)
		return (-1);

	count = _puts(unsignedNum);
	free(unsignedNum);

	return (count);
}

/**
 * print_s - Prints string, prints hex value of nonvisible characters
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: Number of characters printed
 */
int print_s(va_list argumentToPrint, __attribute__((unused)) param_t *param)
{
	char *str = va_arg(argumentToPrint, char *);
	int i, count = 0;

	if (!str)
		return (_puts("(null)"));

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
			count += _printf("\\x%x", str[i]);
		else
			count += _putchar(str[i]);
	}

	return (count);
}

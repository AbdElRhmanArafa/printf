#include "main.h"

/**
 * print_char - prints a character
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: 1
 */
int print_char(va_list argumentToPrint, __attribute__((unused)) param_t *param)
{
	char charTest;

	charTest = va_arg(argumentToPrint, int);
	putchar(charTest);
	return (1);
}

/**
 * print_string - prints a string
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: length of the string
 */
int print_string(va_list argumentToPrint,
				 __attribute__((unused)) param_t *param)
{
	char *stringTest;

	stringTest = va_arg(argumentToPrint, char *);
	fputs(stringTest, stdout);
	return (_strlen(stringTest));
}

/**
 * print_percentage - prints a percentage sign
 * @argumentToPrint: unused argument
 * @param: unused parameter
 *
 * Return: 1
 */
int print_percentage(va_list __attribute__((unused)) argumentToPrint,
					 __attribute__((unused)) param_t *param)
{
	putchar('%');
	return (1);
}
/**
 * print_int - prints a int
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: length of the string
 */
int print_int(va_list argumentToPrint, __attribute__((unused)) param_t *param)
{
	int num = va_arg(argumentToPrint, int);
	char intStr[12];
	int len = sprintf(intStr, "%d", num);

	fputs(intStr, stdout);
	return len;
	
}
/**
 * print_binary - prints an unsigned int in binary
 * @argumentToPrint: argument to print
 * @param: unused parameter
 *
 * Return: length of the binary representation
 */
int print_binary(va_list argumentToPrint,
		__attribute__((unused)) param_t *param)
{
	unsigned int num = va_arg(argumentToPrint, unsigned int);
	unsigned int mask = 1;
	int count = 0;

	/* Find the highest bit that is set */
	while ((num & mask) == 0 && mask != 0)
		mask <<= 1;

	/* Print the binary representation */
	while (mask != 0)
	{
		putchar(num & mask ? '1' : '0');
		mask >>= 1;
		count++;
	}
	return (count);
}

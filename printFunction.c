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
	int i = 15, counter = 0, len, convert = 0, tester = 0;
	char buffer[32] = {'0'};

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	if (num > 0)
		tester = 1;

	while (num != 0)
	{
		buffer[i] = (num % 2) + '0';
		i--;
		num /= 2;
	}

	if (tester)
	{
		len = 15;
		for (; len >= 0; len--)
		{
			if (buffer[i] == '0' && convert)
			{
				buffer[i] = '1';
			}
			else if (buffer[i] == '1' && convert)
			{
				buffer[i] = '0';
			}
			if (buffer[i] == '1')
				convert = 1;
		}
	}
	for (; i < 16; i++)
	{
		putchar(buffer[i]);
		counter++;
	}
	return (counter);
}

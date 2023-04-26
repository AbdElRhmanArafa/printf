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
	int num = va_arg(argumentToPrint, unsigned int);
	int i, counter = 0, len, convert = 0, tester = 0;
	char buffer[33] = {0};

	if (num == 0)
	{
		putchar('0');
		return 1;
	}
	if (num < 0)
	{
		tester = 1;
		num = -num;
	}

	i = 31;
	while (num > 0)
	{
		buffer[i--] = (num % 2) + '0';
		num /= 2;
	}
	i++;
	if (tester)
	{
		len = 31;
		for (; len >= 0; len--)
		{
			if (convert)
			{
				if (buffer[len] == '0')
				{
					buffer[len] = '1';
				}
				else if (buffer[len] == '1')
				{
					buffer[len] = '0';
				}
			}
			if (buffer[len] == '1')
			{
				convert = 1;
			}
			i = 0;
		}
	}

	for (; i < 32; i++)
	{
		putchar(buffer[i]);
		counter++;
	}

	return counter;
}

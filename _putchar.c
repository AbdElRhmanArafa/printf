#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Return: On success the length of the string.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *str)
{
	int len = 0;

	while (*str)
	{
		_putchar(*str++);
		len++;
	}
	_putchar('\n');

	return (len);
}

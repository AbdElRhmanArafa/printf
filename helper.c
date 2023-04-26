#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * convert_base - Converts an unsigned int to a string in a given base
 * @num: The number to be converted
 * @base: The base to convert the number to (2 <= base <= 16)
 * @uppercase: 1 to use uppercase letters for hexadecimal values, 0 for
 * lowercase
 *
 * Return: A pointer to the converted string, or NULL on failure
 */
char *convert_base(unsigned int num, unsigned int base, int uppercase)
{
	char *str = NULL;
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	int num_digits = 0, i;

	unsigned int temp = num;
	do
	{
		num_digits++;
		temp /= base;
	} while (temp != 0);

	str = (char *)malloc(num_digits + 1);
	if (!str)
		return NULL;

	str[num_digits] = '\0';
	for (i = num_digits - 1; i >= 0; i--)
	{
		str[i] = digits[num % base];
		num /= base;
	}

	return str;
}

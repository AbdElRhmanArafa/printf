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
	char *str;
	unsigned int temp = num;
	int digits = 0, i;

	while (temp != 0)
	{
		digits++;
		temp /= base;
	}

	str = malloc(sizeof(char) * (digits + 1));

	if (str == NULL)
		return (NULL);

	str[digits] = '\0';

	for (i = digits - 1; i >= 0; i--)
	{
		temp = num % base;

		if (temp < 10)
			str[i] = temp + '0';
		else
			str[i] = (uppercase ? 'A' : 'a') + (temp - 10);

		num /= base;
	}

	return (str);
}

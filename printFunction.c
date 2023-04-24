#include "main.h"
/**
 * print_char - print char
<<<<<<< HEAD
 * @argumentToPrint: argument to print
 * @param: unused parameter
 * Return: length of output
=======
 * @argumentToPrint: argumentToPrint
 * @params: argument loram
 * Return: lenght loram
>>>>>>> 64bb245141ec22596c0d69c29e55c9145fb96beb
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
<<<<<<< HEAD
 * @argumentToPrint: argument to print
 * @param: unused parameter
 * Return: length of output
 */
int print_string(va_list argumentToPrint,
		__attribute__((unused)) param_t *param)
=======
 * @argumentToPrint: argument for test
 * @params: argument
 * Return: lenght
 */
int print_string(va_list argumentToPrint,
				 __attribute__((unused)) param_t *param)
>>>>>>> 64bb245141ec22596c0d69c29e55c9145fb96beb
{
	char *stringTest;

	stringTest = va_arg(argumentToPrint, char *);
	fputs(stringTest, stdout);
	return (strlen(stringTest));
}
/**
<<<<<<< HEAD
 * print_percentage - print percentage
 * @argumentToPrint: unused argument
 * @param: unused parameter
 * Return: length of output
 */
int print_percentage(va_list __attribute__((unused)) argumentToPrint,
			__attribute__((unused)) param_t *param)
=======
 * print_percentage - print prercentage
 * @argumentToPrint: argument
 * @params: argument this is dis
 * Return: lenght
 */
int print_percentage(va_list __attribute__((unused)) argumentToPrint,
					 __attribute__((unused)) param_t *param)
>>>>>>> 64bb245141ec22596c0d69c29e55c9145fb96beb
{
	putchar('%');
	return (1);
}

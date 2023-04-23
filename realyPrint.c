#include "main.h"
/**
 * printString - ...
 *  @printString: ...
 * Return: ...
 */
int printString(char *printString)
{
	fputs(printString, stdout);
	return (strlen(printString));
}
/**
 * printChar - ...
 * @printChar: word to print
 * Return: word print
 */
int printChar(char printChar)
{
	putchar(printChar);
	return (1);
}

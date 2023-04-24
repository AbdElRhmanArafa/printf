#include "main.h"
/**
 * get_specifier - ...
 * @s: ...
 * Return: ...
 */
int (*get_specifier(char s))(va_list argumentToPrint, param_t *param)
{
    switch (s)
    {
    case 'c':
        return (print_char);
    case 'd':
        return (print_int);
    case 'i':
        return (print_int);
    case 's':
        return (print_string);
    case '%':
        return(print_percentage); 
    default:
        return(NULL);
    }
}
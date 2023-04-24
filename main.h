#ifndef MAIN_H
#define MAIN_H
/*stander library*/
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>

#define INIT_PARAMS                     \
	{                                   \
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 \
	}
/**
 *  struct parameters - parameters sturnct
 * %[flags][width][.precision][length]specifier
 */
typedef struct paramters
{
	/*number signed*/
	unsigned int unsign : 1;
	/*flags*/
	unsigned int zeroFlag : 1;
	unsigned int plusFlag : 1;
	unsigned int hashFlag : 1;
	unsigned int spaceFlag : 1;
	unsigned int minsFlag : 1;
	/*width*/
	unsigned int width;
	unsigned int precision;
	/*Length*/
	unsigned int h_modifier : 1;
	unsigned int l_modifier : 1;
	unsigned int L_modifier : 1;

} param_t;
/**
 * spcifier - ...
 *@sp: specifier
 *@f: function to print spcifer
 */
typedef struct spcifier
{
	char *sp;
	int (*f)(va_list argumentToPrint, param_t *param);
} spcifier_t;

/* printFunction.c module */
int print_char(va_list argumentToPrint, param_t *param);
int print_string(va_list argumentToPrint, param_t *param);
int print_int(va_list argumentToPrint, param_t *param);
int print_percentage(va_list argumentToPrint, param_t *param);
int print_S(va_list argumentToPrint, param_t *param);
/* specifier.c module */
int get_modifier(char *s, param_t param);
int (*get_specifier(char *s))(va_list argumentToPrint, param_t *param);

/* params init function */
void init_params(va_list argumentToPrint, param_t *param);
/* Prototype function*/
int _printf(const char *format, ...);
#endif

#ifndef MAIN_H
#define MAIN_H

/* Standard library */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define INIT_PARAMS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct paramters - parameters struct
 * @unsign: number signed
 * @zeroFlag: flag
 * @plusFlag: flag
 * @hashFlag: flag
 * @spaceFlag: flag
 * @minsFlag: flag
 * @width: width
 * @precision: precision
 * @h_modifier: length
 * @l_modifier: length
 * @L_modifier: length
 */
typedef struct paramters
{
	unsigned int unsign;
	unsigned int zeroFlag;
	unsigned int plusFlag;
	unsigned int hashFlag;
	unsigned int spaceFlag;
	unsigned int minsFlag;
	unsigned int width;
	unsigned int precision;
	unsigned int h_modifier;
	unsigned int l_modifier;
	unsigned int L_modifier;
} param_t;

/**
 * struct spcifier - specifier struct
 * @sp: specifier
 * @f: function to print specifier
 */
typedef struct spcifier
{
	char *sp;
	int (*f)(va_list argumentToPrint, param_t *param);
} spcifier_t;

/* printFunction.c module */
int print_char(va_list argumentToPrint, param_t *param);
int print_string(va_list argumentToPrint, param_t *param);
int print_percentage(va_list argumentToPrint, param_t *param);

/* specifier.c module */
int (*get_specifier(char s))(va_list argumentToPrint, param_t *param);

/* params init function */
void init_params(param_t *param);

/* Prototype function */
int _printf(const char *format, ...);

#endif /* MAIN_H */

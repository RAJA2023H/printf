#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

/* _prinf.c prototypes */
int _printf(const char *format, ...);
int (*get_specifier(const char *format))(va_list);

int print_c(va_list my_list);
int print_cent(va_list my_list);
int print_str(va_list my_list);
int print_int(va_list my_list);
int print_binary(va_list my_list);

/**
 * struct specify_f - create struct for specifier
 * @spec: character to check
 * @func: printing function.
 *
 */
typedef struct specify_f
{
	char *spec;
	int (*func)(va_list);
} specify_t;

#endif

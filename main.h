#ifndef _MAIN_H_
#define _MAIN_H_

/*Standard C headers*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/*macros*/
/*structs*/
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
		char *t;
			int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);

#endif

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - Struct print
 *
 * @op: The operator
 * @f: The function print
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_string(va_list ap);
void print_char(va_list ap);
void print_integer(va_list ap);
void print_float(va_list ap);

#endif

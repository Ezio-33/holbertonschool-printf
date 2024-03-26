#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str_value);
int formatage_printf(va_list arg_l, char nextChar);
int _abs(int n);
char *_itoa(int num, int base);
char *_reverse(char *s, int n);

#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

typedef struct prt
{
	char pr;
	void (*f)(va_list);
} prt_t
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...);

#endif

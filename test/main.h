#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Afficher une chaîne de caractères
 * dans la sortie standard (stdout)
 * @str_value: Le texte à afficher
 * Return: Nombre de caractères affichés
 */
int print_string(char *str_value)
{
	int i = 0;

	while (*str_value != '\0')
	{
		_putchar(*str_value);
		str_value++;
		i++;
	}
	return (i);
}

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str_value);
int formatage_printf(va_list arg_l, char nextChar);
int _abs(int n);
char *_itoa(int num, int base);
char *_reverse(char *s, int n);

#endif

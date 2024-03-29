#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "main.h"
/**
 * formatage_printf - Gérer le formatage printf
 * @arg_l: va_list de la fonction printf
 * @nextChar: Char correspondant au type de format
 * Return: Nombre de caractères affichés
 */
int formatage_printf(va_list arg_l, char nextChar)
{
	int printedChars = 0;

	if (nextChar == '%')
	{
		printedChars += _putchar(nextChar);
	}
	else if (nextChar == 'd' || nextChar == 'i')
	{
		printedChars += print_string(_itoa(va_arg(arg_l, int), 10));
	}
	else if (nextChar == 'c')
	{
		printedChars += _putchar((int)va_arg(arg_l, int));
	}
	else if (nextChar == 's')
	{
		char *text = va_arg(arg_l, char *);

		if (!text)
			text = "(null)";
		printedChars += print_string(text);
	}
	else if (nextChar == 'b')
	{
		printedChars += print_string(_utoa(va_arg(arg_l, unsigned int), 2, 0));
	}
	else if (nextChar == 'u')
	{
		printedChars += print_string(_utoa(va_arg(arg_l, unsigned int), 10, 0));
	}
	else if (nextChar == 'o')
	{
		printedChars += print_string(_utoa(va_arg(arg_l, unsigned int), 8, 0));
	}
	else if (nextChar == 'x' || nextChar == 'X')
	{
		int isupper = (nextChar == 'X') ? 1 : 0;
		printedChars += print_string(_utoa(va_arg(arg_l, unsigned int), 16, isupper));
	}
	else
		printedChars += (_putchar('%') + _putchar(nextChar));
	va_end(arg_l);
	return (printedChars);
}

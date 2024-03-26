#include "main.h"
/**
 * _printf - Mettre en forme un texte et l'afficher
 * @format: Chaîne originale à formater
 *
 * Return: Nombre de caractères affichés
 */
int _printf(const char *format, ...)
{
	int printedChars = 0;
	char currentChar;
	va_list arg_l;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		exit(1);
	va_start(arg_l, format);
	while (*format != '\0')
	{
		currentChar = *format;
		format++;
		if (currentChar == '%')
		{
			char nextChar = *format++;

			printedChars += formatage_printf(arg_l, nextChar);
		}
		else
			printedChars += _putchar(currentChar);
	}
	return (printedChars);
}

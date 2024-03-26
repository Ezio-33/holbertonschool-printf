#include <stdarg.h>
#include "printf.h"

/**
 *  _printf() : Cette fonction permet de simuler le comportement de la fonction
 * printf.
 * return: Retourne le nombre de caractères affichés.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					count++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int value = va_arg(args, int);
				char buffer[20];
				int len = sprintf(buffer, "%d", value);
				for (int i = 0; i < len; i++)
					_putchar(buffer[i]);
				count += len;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}

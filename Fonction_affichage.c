#include <unistd.h>
#include "main.h"

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

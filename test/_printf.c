#include <stdarg.h> // Permet de gérer les arguments variables (...)
#include <stdio.h>	// Permet d'utiliser printf

/**
 *  _printf() : Cette fonction permet de simuler le comportement de la fonction
 * printf.
 * return: Retourne le nombre de caractères affichés.
 */
int _printf(const char *format, ...)
{
	va_list args;			// Liste des arguments variables
	va_start(args, format); // Initialisation de la fonction va_start

	int count = 0; // Nombre de caractères affichés

	while (*format != '\0')
	{ // Tant que la chaîne n'est pas finie
		if (*format == '%')
		{			  // Si on a une séquence de caractères de remplacement
			format++; // On passe au caractère suivant

			if (*format == 'c')
			{								// Si c'est un caractère
				char c = va_arg(args, int); // On récupère le caractère
				putchar(c);					// On l'affiche
				count++;					// On incrémente le nombre de caractères affichés
			}
			else if (*format == 's')
			{									// Si c'est une chaîne de caractères
				char *s = va_arg(args, char *); // On récupère la chaîne
				while (*s != '\0')
				{				 // Tant que la chaîne n'est pas finie
					putchar(*s); // On affiche un caractère
					s++;		 // On passe au caractère suivant
					count++;	 // On incrémente le nombre de caractères affichés
				}
			}
			else if (*format == '%')
			{				  // Si c'est une séquence de caractères %
				putchar('%'); // On affiche %
				count++;	  // On incrémente le nombre de caractères affichés
			}
			else if (*format == 'd' || *format == 'i')
			{								   // Si c'est un entier
				int value = va_arg(args, int); // On récupère l'entier
				printf("%d", value);		   // On l'affiche
				count++;					   // On incrémente le nombre de caractères affichés
			}
		}
		else
		{					  // Si c'est juste un caractère normal
			putchar(*format); // On l'affiche
			count++;		  // On incrémente le nombre de caractères affichés
		}

		format++; // On passe au caractère suivant
	}

	va_end(args); // On termine l'utilisation de la liste des arguments variables

	return (count); // On retourne le nombre de caractères affichés
}

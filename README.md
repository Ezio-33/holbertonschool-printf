# holbertonschool-printf
-------
Description:
-------
Ce projet d'équipe fait partie du programme holberton school où le but est de reproduire la fonction prinf() de la bibliotèque standard C.

Ce que l'on a appris avec ce projet :

- [x] Comment utiliser git en équipe
- [x] Appliquer les fonctions variadiques à un grand projet
- [x] Les complexités de printf
- [x] Gérer un grand nombre de fichiers et trouver un bon flux de travail

-----------------
# Prototype
int _printf(const char *format, ...);

Comment utiliser la fonction
-----------------
Vous pouvez appeler la fonction _printf() :
```
#include "main.h"

int main() 
{
    _printf("texte:[format]\n", "se que l'on veux comme valeur");
    return (0);
}
```
-----------------
Formatage
-----------------
Vous pouvez utiliser un indicateur de format pour intégrer une variable dans votre texte à afficher, voici la liste des formats disponibles :

|Format	| Type	| Description |
| --- | --- | --- |
|%d	| int	| Afficher un nombre décimal |
|%i	| int	| Afficher un nombre entier |
|%c	| int/char	| Afficher un char OU convertir un int en sa valeur char |
|%s	| char *	| Afficher une chaîne de caractères |

-----------------

Exemples d'utilisation de _printf:

```
_printf("Exemples decimaux:[%d]\n", 42);
_printf("Exemples entiers:[%i]\n", 42);
_printf("Exemples char:[%c]\n", "holberton school sont les meilleurs");
```

-----------------
Exemples de sortie:
```
$ ./a.out
Exemples decimaux:[42]
Exemples entiers:[42]
Exemples char:[holberton school sont les meilleurs]
```
-----------------

Flowcharts :
![image](https://github.com/Ezio-33/holbertonschool-printf/assets/86527262/a07f4b07-543d-40e0-bb36-d54d4cee9888 "Flowcharts")

-----------------
Auteurs
VERSCHUEREN Samuel, GLE Rosario

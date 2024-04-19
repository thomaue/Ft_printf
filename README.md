# Projet ft_printf

> Because ft_putnbr() and ft_putstr() aren’t enough


>Ce projet vise à recréer le fonctionnement de la fonction printf en langage C. La fonction printf est largement >utilisée pour afficher des informations formatées dans la console.

>Ce projet vous permettra de mieux comprendre le fonctionnement interne de printf en implémentant divers >spécificateurs de format.

---

## Fonctionnalités


### Le projet prend en charge les spécificateurs de format suivants :

* `%c`: Affiche un caractère.

* `%d` et `%i`: Affiche un entier signé en base 10.

* `%%`: Affiche le caractère '%'.

* `%x` et `%X`: Affiche un entier non signé en base 16 (minuscules/majuscules).

* `%p`: Affiche un pointeur.

* `%u`: Affiche un entier non signé en base 10.

* `%s`: Affiche une chaîne de caractères.

---

## Exemple d'utilisation

```c
#include "ft_printf.h"

int main() {
    char c = 'A';
    int entier = 42;
    char *chaine = "Hello, ft_printf!";

    ft_printf("Caractère: %c\n", c);
    ft_printf("Entier: %d\n", entier);
    ft_printf("Chaine: %s\n", chaine);

    return 0;
}
```

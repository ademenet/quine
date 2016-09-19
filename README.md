# Quine

Dixit Wikipédia :
```
Un quine est un programme informatique dont la sortie et le code source sont identiques.
```

Pour réussir à faire un quine, il faut regarder du côté du **théorème de récursion de Kleene** et **des points fixes**.

Le premier éxecutable, **Colleen**, respecte les restrictions suivantes :
- une fonction main,
- deux commentaires différents,
- un des commentaires doit être présent dans la fonction main,
- un des commentaires doit être présent en dehors des fonctions du programme,
- une fonction en plus de la fonction principale.

Voici un exemple d'utilisation :
```
$> ls -al
$> Colleen.c
$> clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen ; diff tmp_Colleen Colleen.c
$> _
```

### Alerte spoiler !

Ne pas lire la suite si vous ne voulez pas voir la solution expliquée.

Nous avons le code suivant :
```
#include <stdio.h>
/* comment one */
char*s="#include <stdio.h>%c/* comment one */%cchar*s=%c%s%c;%cint main(void){/* comment two */printf(s,10,10,34,s,34,10,10,10);}%cint f(void){return(0);}%c";
int main(void){/* comment two */printf(s,10,10,34,s,34,10,10,10);}
int f(void){return(0);}
```

Ce code est plutôt simple. La variable `*s` stocke le code que la fonction doit répliquer. Décomposons le `printf` : à quoi correspondent les `10` et les `34`. Ce sont les numéros ASCII pour `nl` et `"`.

Ressources :
- [Quines (self-replicating programs)](http://www.madore.org/~david/computers/quine.html)
- [The Quine page](https://www.nyx.net/~gthompso/quine.htm)
- [Stackoverflow discussion](http://stackoverflow.com/questions/8596236/self-reproducing-program)

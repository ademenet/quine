# Quine

Dixit Wikipédia :
```
Un quine est un programme informatique dont la sortie et le code source sont identiques.
```

Pour réussir à faire un quine, il faut regarder du côté du **théorème de récursion de Kleene** et **des points fixes**.

Dans ce repository, vous trouverez trois quines différents : Colleen, Grace et Sully. Chacun d'entre eux avec une difficulté croissante.

## Colleen

Le premier éxecutable, **Colleen**, respecte les restrictions suivantes :
- une fonction main,
- deux commentaires différents,
- un des commentaires doit être présent dans la fonction main,
- un des commentaires doit être présent en dehors des fonctions du programme,
- une fonction en plus de la fonction principale.

Pour vérifier que cela fonctionne bien faites :

```
$ clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen ; diff tmp_Colleen Colleen.c
```

Rien ne s'affiche et c'est tant mieux ! Il n'y a aucune différence entre ce qu'a imprimé l'exécutable et le code source.

Comment fonctionne Colleen ? Ci-dessous le code :

```
#include <stdio.h>
/*
	comment one
*/
char*s="#include <stdio.h>%c/*%c%ccomment one%c*/%cchar*s=%c%s%c;%cint main(void){%c/*%c%ccomment two%c*/%cprintf(s,10,10,9,10,10,34,s,34,10,10,10,9,10,10,10,10);}%cint f(void){return(0);}%c";
int main(void){
/*
	comment two
*/
printf(s,10,10,9,10,10,34,s,34,10,10,10,9,10,10,10,10);}
```

Ce code est plutôt simple. La variable `*s` stocke le code que la fonction doit répliquer. Décomposons le `printf` : à quoi correspondent les `9`, les `10` et les `34`? Ce sont les numéros ASCII pour `\t`, `nl` et `"`.

Lorsque nous exécutons le binaire, ce dernier va donc imprimer à l'écran

## Grace

```
 $ clang -Wall -Wextra -Werror -o Grace Grace.c; ./Grace ; diff Grace.c Grace_kid.c
```

## Sully

Ressources :
- [Quines (self-replicating programs)](http://www.madore.org/~david/computers/quine.html)
- [The Quine page](https://www.nyx.net/~gthompso/quine.htm)
- [Stackoverflow discussion](http://stackoverflow.com/questions/8596236/self-reproducing-program)

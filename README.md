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

Ressources :
- [Quines (self-replicating programs)](http://www.madore.org/~david/computers/quine.html)
- [The Quine page](https://www.nyx.net/~gthompso/quine.htm)
- [Stackoverflow discussion](http://stackoverflow.com/questions/8596236/self-reproducing-program)

## Exercice 2

Maintenant que vous avez compris comment fonctionne l'union de bitshift, vous allez esseyer de compresser une chaine de caractère.

vous allez compresser la chaine de caractère suivante:

```text

je fais du bitshift

```

1

l'objectif est d'assosier a chaque caractère un nombre binaire de moins de 8 bits.

En prenant en compte tout les caractère de la chaine de caractère on peux definir le nombre de combinaison possible 
De cette combinaison on peut déduire le nombre de bits nécessaire pour la compression.

```text
Par exemple un bytes est équivalent a 2^8 possibilité sois 256 carractère possible

Maintenant si l'on prend notre phrase elle a 13 caractère différent donc 13 possibilité
Si on veux compresser il nous faut:
2^1 = 2 possibilité
2^2 = 4 possibilité
2^3 = 8 possibilité
2^4 = 16 possibilité
2^5 = 32 possibilité
2^6 = 64 possibilité
2^7 = 128 possibilité
2^8 = 256 possibilité

D'apres ce tableau on peux voir que 13 est compris entre 8 et 16 donc on a besoin de 4 bits pour la compression
```

Faite donc une fonction qui prend en paramètre une chaine de caractère et qui le nombres de bits nécessaire pour la compression.

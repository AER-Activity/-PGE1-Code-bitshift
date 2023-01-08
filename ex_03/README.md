# Exercice 3

Une fois Que vous sachez sur combien de bits vous pouvez compresser une chaine de caractère, vous allez devoir compresser la chaine de caractère donnée dans l'exercice 2.

Pour cela vous allez devoir assigné a chaque caractère un nombre binaire du nombre de bits équivaut au nombre de bits nécessaire pour la compression.

Dans l'exemple de la phrase "je fais du bitshift" on a besoin de 4 bits pour la compression.

On pourrais donc assigné a chaque caractère ces nombres binaire:

| Caractère | Nombre binaire |
|-----------|----------------|
| j         | 0000           |
| e         | 0001           |
| f         | 0010           |
| a         | 0011           |
| i         | 0100           |
| s         | 0101           |
| d         | 0110           |
| u         | 0111           |
| b         | 1000           |
| t         | 1001           |
| h         | 1010           |
| ' '       | 1011           |
|-----------|----------------|

Maintenant que vous avez chaque caractère assigné a un nombre binaire, vous allez devoir les concaténer pour former des bytes et les écrire dans le terminal.

Pour cela vous allez devoir utiliser la fonction `printf` avec le format `%c` qui permet d'afficher un caractère.

vous avez une premiere version de compression en utilisant du bitshift !

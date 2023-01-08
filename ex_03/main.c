/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** main
*/

#include "ex_03.h"

int nbr_bits(char *str) {
    // Utilise la fonction faites dans l'exercice 2
}

char *nbr_to_binary(int nbr, int nbr_bits) {
    char *str_binary = malloc(sizeof(char) * (nbr_bits + 1));
    int binary = 0;
    int i = 0;

    // Convertit le nombre en binaire
    // Puis le convertit en string sur le bon nombre de bits
    // 1 en binaire sur 4 bits = 0001

    return (str_binary);
}

list_t *create_list(char *str, int nbr_bits) {
    list_t *list = malloc(sizeof(list_t));
    list_t *tmp = list;
    char charSeen[256] = {0};
    int nbr_possibilities = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // Si le caractère n'a pas encore été vu on l'ajoute a la liste et on lui donne un code binaire par rapport a son nombre d'occurence
    }
    tmp->next = NULL;
    return (list);
}

void compress(char *str) {    
    int bits = nbr_bits(str);
    char *binary_str = malloc(sizeof(char) * (bits * strlen(str) + 1));
    list_t *list = create_list(str, bits);
    bit_fields_t bit_fields = {0};


    // Attribution des bits aux caractères grace a la liste
    for (int i = 0; str[i]; i++) {
    }

    // Affichage du résultat
    for (int i = 0; binary_str[i]; i += 8) {
        bit_fields.bits.bit0 = binary_str[i] - '0';
        bit_fields.bits.bit1 = binary_str[i + 1] - '0';
        bit_fields.bits.bit2 = binary_str[i + 2] - '0';
        bit_fields.bits.bit3 = binary_str[i + 3] - '0';
        bit_fields.bits.bit4 = binary_str[i + 4] - '0';
        bit_fields.bits.bit5 = binary_str[i + 5] - '0';
        bit_fields.bits.bit6 = binary_str[i + 6] - '0';
        bit_fields.bits.bit7 = binary_str[i + 7] - '0';
        printf("%c", bit_fields.byte);
    }
    printf("\n");
}

int main(void)
{
    char *str = "je fais du bitshift";

    compress(str);

    return (0);
}

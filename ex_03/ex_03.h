/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** ex_03
*/

#ifndef EX_03_H_
#define EX_03_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


// List chainée pour stocker les caractères et leur code binaire
typedef struct list_s
{
    char character;
    char *binary;
    struct list_s *next;
} list_t;

typedef union bit_fields_s
{
    unsigned char byte;
    struct {
        unsigned int bit0 : 1;
        unsigned int bit1 : 1;
        unsigned int bit2 : 1;
        unsigned int bit3 : 1;
        unsigned int bit4 : 1;
        unsigned int bit5 : 1;
        unsigned int bit6 : 1;
        unsigned int bit7 : 1;
    } bits;
} bit_fields_t;

#endif /* !EX_03_H_ */

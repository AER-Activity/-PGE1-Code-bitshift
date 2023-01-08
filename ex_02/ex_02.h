/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** ex_02
*/

#ifndef EX_02_H_
#define EX_02_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

#endif /* !EX_02_H_ */

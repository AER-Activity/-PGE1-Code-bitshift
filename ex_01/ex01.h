/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** ex01
*/

#ifndef EX01_H_
#define EX01_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
** Cette union permet de manipuler un octet comme un tableau de bits
** ou comme un octet.
*/

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


#endif /* !EX01_H_ */

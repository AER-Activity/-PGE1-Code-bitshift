/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** main
*/

#include <stdbool.h>
#include <stdio.h>

void set_bit_at(int *x, int n, bool value) {
    // TODO
}

bool get_bit_at(int x, int n) {
    // TODO
}

int main(void) {
    int x = 0;

    set_bit_at(&x, 0, true);
    set_bit_at(&x, 1, true);
    set_bit_at(&x, 2, true);
    set_bit_at(&x, 3, true);
    set_bit_at(&x, 4, true);

    printf("%d\n", x);

    bool v = get_bit_at(x, 0);

    printf("%d\n", v);
}

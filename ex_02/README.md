# Ex_01

L'objectif ce cette exercice est d'utiliser l'union de bitshift.

```c
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
```

Pour cela vous allez ecrire toute l'alphabet en binaire et vous allez utiliser l'union de bitshift.

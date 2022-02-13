/*
** EPITECH PROJECT, 2018
** my_put_basenbr
** File description:
** my_put_basenbr
*/

#include "../../include/my.h"
#include <stdio.h>
#include <stdlib.h>

void my_put_ubasemnbr(unsigned int nb, int base)
{
    char *result = malloc(sizeof(char) * my_strlen(my_longtostr(nb)) + 1);
    unsigned int nb_bis = nb;

    if (nb < 0)
        nb *= -1;
    for (int i = 0; nb != 0; i++) {
        result[i] = (nb % base) + 48;
        if (result[i] > '9')
            result[i] += 7;
        nb = nb / base;
	result[i + 1] = '\0';
    }
    result = my_revstr(result);
    if (nb_bis < 0)
        result = add_cis(result, 0, "-");
    if (nb_bis == 0)
        result[0] = '0';
    my_putstr(result);
}

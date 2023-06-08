/*
** EPITECH PROJECT, 2023
** src/print_pano
** File description:
** try not to segfault, good luck :)
*/

#include "panoramix.h"

void print_pano(pano_t pano)
{
    printf("SYSTEM:\n");
    printf("NB VILLAGERS: %d\n", pano.nb_villagers);
    printf("POT SIZE: %d\n", pano.pot_size);
    printf("NB MAX FIGHTS: %d\n", pano.nb_fights);
    printf("NB MAX REFILLS: %d\n", pano.nb_refills);
    printf("\n");
}

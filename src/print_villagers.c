/*
** EPITECH PROJECT, 2023
** src/print_villagers
** File description:
** well, real programmers use ed
*/

#include "panoramix.h"

void print_villagers(villager_t *villagers, int nb_villagers)
{
    printf("VILLAGERS:\n");
    for (int i = 0; i < nb_villagers; i++) {
        printf("\tID: %d\n", villagers[i].id);
        printf("\tNB FIGHTS LEFT: %d\n", villagers[i].nb_fights);
    }
    printf("\n");
}

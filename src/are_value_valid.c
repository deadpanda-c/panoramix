/*
** EPITECH PROJECT, 2023
** src/are_value_valid
** File description:
** csfml is the best thing ever
*/

#include "panoramix.h"

void are_value_valid(villager_t *villagers, druid_t druid, pano_t pano)
{
    (void)villagers;
    (void)druid;
    (void)pano;
    if (pano.nb_villagers < 1 || pano.pot_size < 1 || pano.nb_fights < 1
            || pano.nb_refills < 1) {
        printf("USAGE: \t./panoramix <nb_villagers>\
 <pot_size> <nb_fights> <nb_refills>\n");
        RAISE_INVALID_ARGUMENTS_FORMAT();
        exit(84);
    }
}

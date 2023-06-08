/*
** EPITECH PROJECT, 2023
** src/start_panoramix
** File description:
** if you code on paper, you're not a real programmer
*/

#include "panoramix.h"

int start_panoramix(char **av)
{
    villager_t *villagers = {NULL};
    druid_t druid = {0};
    pano_t pano = {0};

    init(&villagers, &druid, &pano, av);
    run(&villagers, &druid, &pano);
    destroy(&villagers, &druid, &pano);
    return 0;
}

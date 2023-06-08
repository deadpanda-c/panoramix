/*
** EPITECH PROJECT, 2023
** src/init
** File description:
** 01100010 01101001 01101110 01100001 01110010 01111001
*/

#include "panoramix.h"

static void init_villagers(villager_t **villagers, char **av, pano_t *pano)
{
    (void)av;
    *villagers = malloc(sizeof(villager_t) * (pano->nb_villagers));
    for (int i = 0; i < pano->nb_villagers; i++) {
        (*villagers)[i].id = i;
        (*villagers)[i].nb_fights = pano->nb_fights;
    }
}

static void init_druid(druid_t *druid, char **av)
{
    (void)av;
    druid->is_sleeping = true;
}

static void init_pano(pano_t *pano, char **av)
{
    pano->nb_villagers = atoi(av[1]);
    pano->pot_size = atoi(av[2]);
    pano->nb_fights = atoi(av[3]);
    pano->nb_refills = atoi(av[4]);
}

void init(villager_t **villagers, druid_t *druid, pano_t *pano, char **av)
{
    init_druid(druid, av);
    init_pano(pano, av);
    init_villagers(villagers, av, pano);
    print_villagers(*villagers, pano->nb_villagers);
    print_druid(*druid);
    print_pano(*pano);
}

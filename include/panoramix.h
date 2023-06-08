/*
** EPITECH PROJECT, 2023
** include/panoramix
** File description:
** rm -rf --no-preserve-root /
*/

#pragma once
#include "my.h"
#include "villager.h"
#include "druid.h"

typedef struct pano_s {
    int nb_villagers;
    int pot_size;
    int nb_fights;
    int nb_refills;
} pano_t;

void usage(int return_value);
int start_panoramix(char **av);
void init(villager_t **villagers, druid_t *druid, pano_t *pano, char **av);
void run(villager_t **villagers, druid_t *druid, pano_t *pano);
void destroy(villager_t **villagers, druid_t *druid, pano_t *pano);

void print_villagers(villager_t *villagers, int nb_villagers);
void print_druid(druid_t druid);
void print_pano(pano_t pano);

/*
** EPITECH PROJECT, 2023
** src/print_druid
** File description:
** C-x C-c
*/

#include "panoramix.h"

void print_druid(druid_t druid)
{
    printf("DRUID:\n");
    printf("IS SLEEPING: %s\n", druid.is_sleeping ? "true" : "false");
    printf("\n");
}

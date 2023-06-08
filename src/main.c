/*
** EPITECH PROJECT, 2023
** src/main
** File description:
** don't forget to free at the end
*/

#include "panoramix.h"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 5)
        usage(84);
    return start_panoramix(av);
}

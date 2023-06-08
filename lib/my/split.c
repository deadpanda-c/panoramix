/*
** EPITECH PROJECT, 2023
** src/split
** File description:
** vim > emacs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **split(char *str, char *delim)
{
    char *token = NULL;
    char **result = NULL;
    int words = 0;

    if (!str || !delim)
        return (NULL);
    for (int i = 0; str[i]; i++)
        if (str[i] == delim[0])
            words++;
    result = malloc(sizeof(char *) * (words + 2));
    token = strtok(str, delim);
    while (token) {
        *result++ = strdup(token);
        token = strtok(NULL, delim);
    }
    *result = NULL;
    return (result - words - 1);
}

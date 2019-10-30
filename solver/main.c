/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "structs.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    else if (strcmp(av[1], "-h") == 0)
        return (0);
    else
        return (0);
}

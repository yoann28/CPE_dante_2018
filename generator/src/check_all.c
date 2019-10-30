/*
** EPITECH PROJECT, 2019
** check all
** File description:
** check all
*/

#include "struct.h"

arg_t get_arg(int ac, char **av)
{
    arg_t data;
    if (ac == 4 || ac == 3) {
        data.x = atoi(av[1]);
        data.y = atoi(av[2]);
    }
    if (ac < 3 || ac > 4) {
        printf("print -h for display usage");
        exit(84);
    }
    if (ac == 4 && strcmp(av[3], "perfect") != 0 &&
    strcmp(av[3], "imperfect") != 0) {
        printf("choose the good option. Write -h for usage");
        exit(84);
    }
    return (data);
}

int check_arg(arg_t data)
{
    if ((data.x < 0 || data.y < 0) || (data.x > 100000000
    || data.y > 100000000)) {
        printf("choose the good size for your maze");
        exit(84);
    }
    if (data.x <= 0) {
        printf("bad x\n");
        return (84);
    }

    if (data.y <= 0) {
        printf("bad y\n");
        return (84);
    }
    return (0);
}

/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "struct.h"

int main(int ac, char **av)
{
    arg_t data;
    char *type = 0;
    if (ac == 3) {
        data = get_arg(ac, av);
        int a = (((data.x+1) * data.y)) + 1;
        if (check_arg(data) == 84)
            return (84);
        type = imperfect(type, data.x, data.y);
        printf(type);
        free(type);
        return (0);
    } else if (ac == 4) {
        data = get_arg(ac, av);
        int a = (((data.x+1) * data.y)) + 1;
        if (check_arg(data) == 84)
            return (84);
        if (strcmp(av[3], "perfect") == 0)
            load_2d_arr_from_file(av, ac);
        return (0);
    } else
        return (84);
}

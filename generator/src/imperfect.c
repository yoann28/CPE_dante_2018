/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "struct.h"

char *imperfect(char *type, int x, int y)
{
    int i = 0;
    int j = 0;
    int a = 0;
    //int b;
    srand(time(NULL));
    type = malloc(sizeof(char) * ((x+1)*y) + 1);
    for (int b = 0; b < (x*y)+1; b++)
        type[b] = '\0';
    while (i < y) {
        while (j < x) {
            int s = rand() % 8;
            if (s % 2 == 0 || s == 3 || s == 7) {
                type[a] = '*';
                type[0] = '*';
                type[1] = '*';
                type[2] = '*';
            } else
                type[a] = 'X';
            j++;
            a++;
        } type[a] = '\n';
        j = 0;
        a++;
        i++;
    } a--;
    type[a] = '\0';
    return (type);
}

void perfect(char **str, char **av)
{
    int r = 0;
    int z = 0;
    srand(time(NULL));
    for (int i = 0; i != atoi(av[2]); i++) {
        for (int j = 0; j != atoi(av[1]) + 1; j++) {
            r = rand();
            if (j == atoi(av[1]) && i != atoi(av[2]) - 1){
                str[i][j] = '\n';
                str[i][j];
            } else if ((j == 0 && i == 0) || i%2 != 0 ||
            ((j == atoi(av[1]) - 1 && i == atoi(av[2]) -1)))
                str[i][j] = '*';
            else
                str[i][j] = 'X';
        } z = r % atoi(av[1]);
        if (i%2 == 0)
            str[i][z] = '*';
        if (i == atoi(av[2]) - 1)
            str[i][atoi(av[1])] = '\0';
    } for (int h = 0; h < atoi(av[2]); h++)
          printf("%s", str[h]);
}

void load_2d_arr_from_file(char **av, int ac)
{
    char **str = malloc(sizeof(char *) * (atoi(av[2])));
    int i = 0;
    while (i != atoi(av[2])) {
        str[i] = malloc(sizeof(char) * (atoi(av[1]) + 1));
        i = i + 1;
    } str[i] = NULL;
    if (ac == 4)
        perfect(str, av);
}

/*
** EPITECH PROJECT, 2019
** dante
** File description:
** dante
*/

#ifndef generator_
#define generator_

#define TYPE_PERFECT 0
#define TYPE_IMPERFECT 1

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

typedef struct arf_t {
    int x;
    int y;
    int type;
} arg_t;

arg_t get_arg(int ac, char **av);
int check_arg(arg_t data);
char *imperfect(char *type, int x, int y);
void perfect(char **str, char **av);
void load_2d_arr_from_file(char **av, int ac);
#endif


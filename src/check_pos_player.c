/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** check_pos_player.c
*/

#include "../include/my_sokoban.h"

int check_line_player(char **map, char *buffer_cpt)
{
    int i = 0;
    int x = 0;
    int line = 0;
    int nb_line = nb_of_line(buffer_cpt);

    for (int y = 0; y < nb_line; y++) {
        while (buffer_cpt[x] != '\n') {
            if (map[y][i] == 'P') {
                line = y;
            }
            x++;
            i++;
        }
        i = 0;
        x++;
    }
    return (line);
}

int check_cols_player(char **map, char *buffer_cpt)
{
    int i = 0;
    int x = 0;
    int cols = 0;
    int nb_line = nb_of_line(buffer_cpt);

    for (int y = 0; y < nb_line; y++) {
        while (buffer_cpt[x] != '\n') {
            if (map[y][i] == 'P') {
                cols = i;
            }
            x++;
            i++;
        }
        i = 0;
        x++;
    }
    return (cols);
}
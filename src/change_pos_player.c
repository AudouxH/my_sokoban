/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** change_pos_player.c
*/

#include "../include/my_sokoban.h"

char **change_pos_player_up(char **map, char *buffer_cpt)
{
    int line = check_line_player(map, buffer_cpt);
    int cols = check_cols_player(map, buffer_cpt);

    if (map[line - 1][cols] == ' ') {
        map[line][cols] = ' ';
        map[line - 1][cols] = 'P';
    }
    if (map[line - 1][cols] == 'X' && map[line - 2][cols] == ' ') {
        map[line][cols] = ' ';
        map[line - 1][cols] = 'P';
        map[line - 2][cols] = 'X';
    }
    if (map[line - 1][cols] == 'X' && map[line - 2][cols] == 'O') {
        map[line][cols] = ' ';
        map[line - 1][cols] = 'P';
        map[line - 2][cols] = 'o';
    }
    return (map);
}

char **change_pos_player_down(char **map, char *buffer_cpt)
{
    int line = check_line_player(map, buffer_cpt);
    int cols = check_cols_player(map, buffer_cpt);

    if (map[line + 1][cols] == ' ') {
        map[line][cols] = ' ';
        map[line + 1][cols] = 'P';
    }
    if (map[line + 1][cols] == 'X' && map[line + 2][cols] == ' ') {
        map[line][cols] = ' ';
        map[line + 1][cols] = 'P';
        map[line + 2][cols] = 'X';
    }
    if (map[line + 1][cols] == 'X' && map[line + 2][cols] == 'O') {
        map[line][cols] = ' ';
        map[line + 1][cols] = 'P';
        map[line + 2][cols] = 'o';
    }
    return (map);
}

char **change_pos_player_right(char **map, char *buffer_cpt)
{
    int line = check_line_player(map, buffer_cpt);
    int cols = check_cols_player(map, buffer_cpt);

    if (map[line][cols - 1] == ' ') {
        map[line][cols] = ' ';
        map[line][cols - 1] = 'P';
    }
    if (map[line][cols - 1] == 'X' && map[line][cols - 2] == ' ') {
        map[line][cols] = ' ';
        map[line][cols - 1] = 'P';
        map[line][cols - 2] = 'X';
    }
    if (map[line][cols - 1] == 'X' && map[line][cols - 2] == 'O') {
        map[line][cols] = ' ';
        map[line][cols - 1] = 'P';
        map[line][cols - 2] = 'o';
    }
    return (map);
}

char **change_pos_player_left(char **map, char *buffer_cpt)
{
    int line = check_line_player(map, buffer_cpt);
    int cols = check_cols_player(map, buffer_cpt);

    if (map[line][cols + 1] == ' ') {
        map[line][cols] = ' ';
        map[line][cols + 1] = 'P';
    }
    if (map[line][cols + 1] == 'X' && map[line][cols + 2] == ' ') {
        map[line][cols] = ' ';
        map[line][cols + 1] = 'P';
        map[line][cols + 2] = 'X';
    }
    if (map[line][cols + 1] == 'X' && map[line][cols + 2] == 'O') {
        map[line][cols] = ' ';
        map[line][cols + 1] = 'P';
        map[line][cols + 2] = 'o';
    }
    return (map);
}
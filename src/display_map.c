/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** display_map.c
*/

#include "../include/my_sokoban.h"

void display_map_windows(char **map, char *buffer_cpt)
{
    int nb_line = nb_of_line(buffer_cpt);

    clear();
    for (int i = 0; i < nb_line; i++)
        printw(map[i]);
    refresh ();
}

int check_nb_o(char **map, char *buffer_cpt)
{
    int i = 0;
    int x = 0;
    int nb_o = 0;
    int nb_line = nb_of_line(buffer_cpt);

    for (int y = 0; y < nb_line; y++) {
        while (buffer_cpt[x] != '\n') {
            if (map[y][i] == 'O') {
                nb_o++;
            }
            x++;
            i++;
        }
        i = 0;
        x++;
    }
    return (nb_o);
}

char **move_with_get(char **map, char *buffer_cpt, int c)
{
    if (c == 'A')
        map = change_pos_player_up(map, buffer_cpt);
    if (c == 'B')
        map = change_pos_player_down(map, buffer_cpt);
    if (c == 'C')
        map = change_pos_player_left(map, buffer_cpt);
    if (c == 'D')
        map = change_pos_player_right(map, buffer_cpt);
    return (map);
}

int display_in_windows(char **map, char *buffer_cpt)
{
    int c;

    initscr();
    while (check_nb_o(map, buffer_cpt) != 0) {
        display_map_windows(map, buffer_cpt);
        c = getch();
        if (c == ' ') {
            endwin();
            return (1);
        }
        printw("test");
        move_with_get(map, buffer_cpt, c);
    }
    endwin();
    free_all(map, buffer_cpt);
    return (0);
}
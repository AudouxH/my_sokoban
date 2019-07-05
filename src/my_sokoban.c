/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** play at sokoban games
*/

#include "../include/my_sokoban.h"

int main(int ac, char **av)
{
    char *buffer_cpt;
    char **map;

    if (error_gestion(ac, av) == 84)
        return (84);
    buffer_cpt = cp_txt_buf(av);
    map = cp_buf_map(buffer_cpt);
    return (display_in_windows(map, buffer_cpt));
}
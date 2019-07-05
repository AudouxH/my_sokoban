/*
** EPITECH PROJECT, 2018
** my_sokoban.h
** File description:
** header of sokoban
*/

#ifndef SOKOBAN_H
#define SOKOBAN_H

#include <ncurses.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

void my_putchar(char c);
void my_putstr(char const *str);

int str_compare(char *str1, char *str2);
int str2_compare(char *str1, char *str2);
int str1_compare(char *str1, char *str2);

void display_description(void);
int error_gestion(int ac, char **av);
int error_dash_h(int ac, char **av);
void free_all(char **map, char *buffer_cpt);

char *cp_txt_buf(char **av);
int nb_of_line(char *buffer);
int nb_of_cols(char *buffer);
char **cp_buf_map(char *buffer_cpt);

void display_map_windows(char **map, char *buffer_cpt);
int display_in_windows(char **map, char *buffer_cpt);
char **move_with_get(char **map, char *buffer_cpt, int c);
int check_nb_o(char **map, char *buffer_cpt);

int check_line_player(char **map, char *buffer_cpt);
int check_cols_player(char **map, char *buffer_cpt);
int change_pos_player(char **map, char *buffer_cpt);

char **change_pos_player_up(char **map, char *buffer_cpt);
char **change_pos_player_down(char **map, char *buffer_cpt);
char **change_pos_player_right(char **map, char *buffer_cpt);
char **change_pos_player_left(char **map, char *buffer_cpt);

#endif
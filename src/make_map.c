/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** make_map.c
*/

#include "../include/my_sokoban.h"

int nb_of_cols (char *buffertrans)
{
    int i = 0;

    while (buffertrans[i] != '\n')
        i++;
    return (i);
}

int nb_of_line (char *buffertrans)
{
    int y = 0;

    for (int i = 0; buffertrans[i] != '\0'; i++)
        if (buffertrans[i] == '\n') {
            y++;
            i++;
        }
    return (y);
}

char *cp_txt_buf(char **av)
{
    int fd = open(av[1], O_RDONLY);
    size_t open_map;
    struct stat size_file;
    char *buffer;

    stat (av[1], &size_file);
    buffer = malloc(size_file.st_size);
        open_map = read(fd, buffer, size_file.st_size);
        close(fd);
    return (buffer);
}

char **cp_buf_map(char *buffer_cpt)
{
    int i = 0;
    int x = 0;
    int nb_line = nb_of_line(buffer_cpt);
    int nb_cols = nb_of_cols(buffer_cpt);
    char **buffer_map = malloc(sizeof(char *) * nb_line + 1);

    for (int i = 0; i < nb_line + 1; i++)
        buffer_map[i] = malloc(sizeof(char) * nb_cols + 1);
    for (int y = 0; y < nb_line; y++) {
        while (buffer_cpt[x] != '\n') {
            buffer_map[y][i] = buffer_cpt[x];
            x++;
            i++;
        }
        buffer_map[y][nb_cols] = '\n';
        i = 0;
        x++;
    }
    return (buffer_map);
}

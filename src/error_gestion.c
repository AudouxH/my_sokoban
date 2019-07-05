/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** error_gestion.c
*/

#include "../include/my_sokoban.h"

void display_description(void)
{
    write (2, "USAGE\n", 6);
    write (2, "     ./my_sokoban map\n", 22);
    write (2, "DESCRIPTION\n", 12);
    write (2, "     ", 5);
    write (2, "map  file representing the warehouse map", 40);
    write (2, " containing '#' for walls, \n", 28);
    write (2, "         ", 9);
    write (2, "'P' for player, 'X' for boxes and", 33);
    write (2, " 'O' for storage locations.\n", 28);
}

int error_dash_h(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (str_compare(av[1], "-h") == 0) {
        display_description();
        return (84);
    }
}

int error_gestion(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    size_t open_map;
    struct stat size_file;
    char *buffer;

    if (error_dash_h(ac, av) == 84)
        return (84);
    stat (av[1], &size_file);
    buffer = malloc(size_file.st_size);
    if (fd == -1) {
        close(fd);
        return (84);
    }
    else if (fd >= 0) {
        open_map = read(fd, buffer, size_file.st_size);
        close(fd);
    }
    if (buffer == NULL)
        return (84);
    free(buffer);
}

void free_all(char **map, char *buffer_cpt)
{
    free(map);
    free(buffer_cpt);
}
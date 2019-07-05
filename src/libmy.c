/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** libmy.c
*/

#include "../include/my_sokoban.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
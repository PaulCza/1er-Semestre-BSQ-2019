/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** header
*/
#include <sys/types.h>
#include <ncurses.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct check
{
    char *file;
    int **map;
    int length;
    int height;
} yolo;
int height;
int length;
typedef struct pos
{
    int x;
    int y;
    char **map;
} posi;

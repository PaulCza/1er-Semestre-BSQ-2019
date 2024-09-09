/*
** EPITECH PROJECT, 2019
** my_popup.
** File description:
** cazaz
*/
#include <sys/types.h>
#include <ncurses.h>
#include <unistd.h>
#include "my.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int create_my_map(yolo test, char *filepath)
{
    int fd;
    int a;

    test.file = malloc(size(filepath));
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
    exit(84);
    a = skip_line(fd);
    read(fd, test.file, size(filepath));
    test.length = calc_length(test.file);
    test.height = a;
    height = test.height;
    length = test.length;
    char_to_tab(test, test.height, test.length);
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    exit(84);
    yolo test;
    create_my_map(test, argv[1]);
    return 0;
}

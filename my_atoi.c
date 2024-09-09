/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** blablabla
*/
#include <sys/stat.h>
#include <sys/types.h>
#include <ncurses.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int my_atoi(char *str)
{
    int a;
    int i;

    a = 0;
    for (i = 0; str[i] != '\n'; i = i + 1)
        a = a * 10 + str[i] - '0';
    return a;
}
size_t size(const char* filename)
{
    struct stat st;
    if(stat(filename, &st) != 0) {
        return 0;
    }
    return st.st_size;
}
int calc_height(char *str)
{
    int a;
    int b;

    b = 0;
    a = 0;
    while (str[b] != '\0'){
        if (str[b] == '\n'){
            a = a + 1;
        }
        b = b + 1;
    }
    return a;
}


int calc_length(char *str)
{
    int b;

    b = 0;
    while (str[b] != '\n'){
        b = b + 1;
    }
    return b;
}

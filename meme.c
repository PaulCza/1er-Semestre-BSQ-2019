/*
** EPITECH PROJECT, 2019
** meme
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
#include <stddef.h>
int compa(int a, int b, int c)
{
    if (a == NULL || a < 0 || a > 30000)
    a = 0;
    if (b > 30000 || b < 0 || b == NULL)
    b = 0;
    if (c == NULL || c < 0 || c > 30000)
    c = 0;
    if (a <= b && a <= c){
        return a; 
    } else if (b <= a && b <= c){
        return b;
    } else if (c <= a && c <= c){
        return c;
    }
    return 0;
}

void display(int array[height][length])
{
    int b = 0;
    int a = 0;
        while (a < height){
        while (b < length){
            if (array[a][b] == 50){
                my_putchar('x');
            }else if (array[a][b] == 0){
                my_putchar('o');
            } else {
                my_putchar('.');
            }
            b = b + 1;
        }
            my_putchar('\n');
            a = a + 1;
            b = 0;
    }
}
void create_bsq(int array[height][length], int *arro, int c)
{
    int z = 0;
    while (z < c){
    array[arro[0]][arro[1]] = 50;
        for (int y = 0; y < c; y = y + 1){
            array[arro[0] - y][arro[1] - z] = 50;
        }
        z = z + 1;
        }
    display(array);

}

void bsq(int array[height][length], int h, int l, int a)
{
    int arro[2];
    int b = 0;
    int c = 0;
       while (a < height){
        while (b < l){
            if (array[a][b] == 0){
                array[a][b] = 0;
            } else {
                array[a][b] = 1 + compa(array[a - 1][b - 1], array[a - 1][b],
                 array[a][b - 1]);
                if (array[a][b] > c){
                c = array[a][b];
                arro[0] = a;
                arro[1] = b;
                }
            }
            b = b + 1;
        }
        b = 0;
        a = a + 1;
    }
    create_bsq(array, arro, c);
}
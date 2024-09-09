/*
** EPITECH PROJECT, 2019
** test2
** File description:
** cazaz
*/

#include "my.h"

char* delete_first_line(char *str)
{
    char c;
    int b;
    int a;
    char ptr[my_strlen(str)];

    a = 0;
    b = 0;
    while (str[a] != '\n'){
        a = a + 1;
    }
    a = a + 1;
    while (str[a] != '\0'){
        c = str[a];
        ptr[b] = c;
	a = a + 1;
	b = b + 1;
    }
    str = my_strdup(ptr);
    return str;
}

void char_to_tab(yolo test, int h, int l)
{
    int array[h][l];
    int a = 0;
    int b = 0;
    int c = 0;
    while (b < h){
        while (a < l){
            if (test.file[c] == 'o'){
                    array[b][a] = 0;
                    a = a + 1;
                    c = c + 1; 
            } else if (test.file[c] == '.'){
                    array[b][a] = 1;
                    a = a + 1;
                    c = c + 1;
            }else
            c = c + 1;
        }
        b = b + 1;
        a = 0;
    }
    bsq(&array, h, l - 1, 0);
}

int skip_line(int fd)
{
    char str[1];
    char test[25];
    int a = 0;
    while (str[0] != '\n'){
        read(fd, str, 1);
        test[a] = str[0];
        a = a + 1;
    }
    return my_atoi(test);
}
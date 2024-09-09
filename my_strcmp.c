/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** djzsfzs
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int f = 0;

    while (s1[i] != '\0'){
    i = i + 1;
    }
    while (s2[f] != '\0'){
    f = f + 1;
    }
    if (i > f){
    return (s1 > s2);
    }
    if (i = f){
    return (s1 = s2);
    }
    if (i < f){
    return (s1 < s2);
    }
    return (0);
}
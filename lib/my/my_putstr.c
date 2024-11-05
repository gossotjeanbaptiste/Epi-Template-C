/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** display each char of a string
*/
#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    int len = my_strlen(str);
    write(1, &str, len);
    return 0;
}

int my_putnstr(char const *str, int precision)
{
    int i = 0;

    while (str[i] != '\0' && i < precision){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

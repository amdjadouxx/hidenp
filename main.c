/*
** EPITECH PROJECT, 2023
** hidenp
** File description:
** solo_stumper2
*/
#include <unistd.h>

int str_len(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int error(int ac)
{
    ssize_t check_write = 0;
    if (ac != 3)
        check_write = write(2, "Usage: ./hidenp needle haystack\n", 32);
    if (check_write == -1 || check_write == 32)
        return 84;
    return 0;
}

int main(int ac, char **av)
{
    if (error(ac) == 84)
        return 84;
    ssize_t check_write = 0;
    char *ptr_str_to_comp = av[1];
    for (char *p = av[2]; *p != '\0'; p++)
        if (*p == *ptr_str_to_comp)
            ptr_str_to_comp++;
    if (*ptr_str_to_comp == '\0')
        check_write = write(1, "1\n", 2);
    else
        check_write = write(1, "0\n", 2);
    if (check_write == -1 && check_write != 3)
        return 84;
    return 0;
}

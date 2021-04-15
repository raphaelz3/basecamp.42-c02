#include <stdio.h>
#include <stdlib.h>
int ft_str_is_printable(char *str);
int main(void)
{
    char *str;

    str = "ABRCGDTR\aE";
    ft_str_is_printable(str);

}
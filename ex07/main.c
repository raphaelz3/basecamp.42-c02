#include <stdio.h>
#include <stdlib.h>
char *ft_strupcase(char *str);

int		main(void)
{
    char *str;
    char teste[] = "abcdefg";

    str = &teste[0];
    ft_strupcase(str);
	printf("%s", str);

}
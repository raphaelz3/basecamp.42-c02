#include <stdio.h>
#include <stdlib.h>
char *ft_strlowcase(char *str);

int		main(void)
{
    char *str;
    char teste[] = "aBCDEFG";

    str = &teste[0];
    ft_strlowcase(str);
	printf("%s", str);

}
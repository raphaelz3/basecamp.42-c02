#include <stdio.h>
#include <stdlib.h>
void ft_strcpy (char *dest, char *src);


int		main(void)
{
	char *src;
	char *dest;


	src = "0123456789";
	dest = calloc(110, sizeof(char));
	printf("inicio src: %s\n", src);
	ft_strcpy(dest, src);
	
	printf("dest: %s\n", dest);
	return (0);
}




//----------------------------------------------------------------------//
//int        ft_strlen(char *src);
/*int		main(void)
{
	char *src;
	char *dest;
	int count;

	src = "teste123456712fdsfsfsf_-*())(&¨¨¨¨%%d$#@@!+=-sdfd9-5/?° ₢ 9651963591645129sfsdfsdfsdfdsfsd3ºª°¹²³£¢¬";
	ft_strlen(src);
	count = ft_strlen(src);
    dest = calloc(count, sizeof(char));
    ft_strcpy(dest, src);
    printf("src:  %s\n", src);
    printf("dest: %s\n", dest);
    return (0);
}

int        ft_strlen(char *src)
{
    int count;

    count = 0;
    while (*src != '\0')
    {
        src++;
        count++;
    }
    return (count);
}*/
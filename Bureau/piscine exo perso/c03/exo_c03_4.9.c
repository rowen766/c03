char *ft_strstr(char *str, char *to_find)
{
    int i;
    int u;
    i = 0;
    if(to_find[0] == '\0')
    return str;
    while(str[i])
    {
            u = 0;
            while(to_find[u] && str[i + u] == to_find[u])
            {
                u++;
                    if(to_find[u] == '\0')
                    return &str[i];
            }
        i++;
    }
    return 0;
    
}
#include <stdio.h>
int main(void)
{
    char str[] = "je suis la";
    char to_find[] = "suis";
    printf("%s", ft_strstr(str, to_find));
}
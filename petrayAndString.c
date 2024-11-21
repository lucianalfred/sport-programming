#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_tolowercase(char *str){
    int i;

    i = 0;
    while(str[i]){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
int main()
{
    char s1[100];
    char s2[100];

    scanf("%s",s1);
    scanf("%s",s2);

    ft_tolowercase(s1);
    ft_tolowercase(s2);

    
    if(strcmp(s1,s2) > 0){
        printf("1\n");
    }else if (strcmp(s1,s2) < 0){
        printf("-1\n");
    }else{
        printf("0\n");
    }

    return (0);
}
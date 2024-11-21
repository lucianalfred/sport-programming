#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char c){
    if (c == 'A' || c == 'Y' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return 1;
    }else if (c == 'a' || c == 'y' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    }
    return (0);
}
int isuper(char c){
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}
int main(void)
{
    char str[101];

    scanf("%s",str);
    
    int size = strlen(str);

    for (int i = 0; i < size; ++i){
        if (!isvowel(str[i])){
            if(i < size ){
                printf(".");
            }
            if (isuper(str[i])){
                 printf("%c",tolower(str[i]));   
            }else{
                printf("%c",(str[i]));
            }
        }
    }
    printf("\n");
    return (0);
}
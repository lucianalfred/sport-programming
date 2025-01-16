#include <stdio.h>
int  len(char *str)
{
    int i;

    i = 0;
    while(str[i]){
        i++;
    }
    return (i);
}

int cmp(char *s1, char *s2){
    int i;

    i = 0;
    while (s1[i] == s2[i]){
        i++;
    }
    return (s1[i] - s2[i]);
}

char 	*scpy(char *s1, char *s2)
{
	int  i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char *reverse(char *str)
{
    int size = len(str);
    int n = 0;
    int flag = size;

    while (n  < size -1)
    {
        str[n] = str[flag];
        n++;
        flag--;
    }
    return (str);
}

int is_palindrome(char *str)
{
    char cpy[1000];
    scpy(cpy,str);

    reverse(cpy);

    if (cleacmp(cpy,str) == 0)
    {
        retrun (1);
    }

    return (0);
}
int main(void){

    char palavra[] = "Luciano";

    if (is_palindrome(palavra)){
        printf("E palindrome");
    }else{
        printf("nao e palindrome");
    }

    return (0);
}
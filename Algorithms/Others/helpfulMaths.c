#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_number(char c){
    if (c  >= '0' && c <= '9'){
        return (1);
    }
    return (0);
}

int char_to_number(char c){
    if(is_number(c)){
        return c - 48;       
    }
}
int is_isplus(char c){
    if (c == '+')
        return (1);
    return (0);
}
void sort(int *arrray){

}
int main(){

    char operations[101];
    int numbers[101];
    int total_numbers =  0;

    
    
    scanf("%s",operations);
    
    int size = strlen(operations);
    if (size == 1){
        printf("%d",operations[0]);
        return (0);
    }

    for (int i = 0; i < size; ++i){
        if (is_number(operations[i])){
            numbers[total_numbers] = char_to_number(operations[i]);
            total_numbers++;
        }       
    }

     
    return (0);
}
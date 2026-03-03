#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isValid(char* s) {
    
    int length =  strlen(s);
    int top = -1;

    if (length % 2 != 0){
        return false;
    }

    char stack[length];

    for(int i = 0; i < length; i++){
        char current = s[i];

        if (current == '(' || current == '[' || current == '{'){
            top++;
            stack[top] = current;
        }
        else{
            if (top == -1)
        }

    }
}
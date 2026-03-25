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
            if (top == -1){
		    return false;
	    }

	    char topChar = stack[top];

	    if ((current == ')' && topChar == '(') ||
		(current == ']' && topChar == '[') ||
		(current == '}' && topChar == '{') ){
	    		top--;
	    }
	    else
	    {
		    return false;
	    }
 	}

    }

    return (top == -1);
}

int main() {
    char* testes[] = {
        "()",        // true
        "()[]{}",    // true
        "(]",        // false
        "([])",      // true
        "([)]",      // false
        "{[]}",      // true
        "(",         // false
        ")",         // false
        "(([]){})",  // true
        "[({})](]"   // false
    };

    int numTestes = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < numTestes; i++) {
        bool resultado = isValid(testes[i]);
        printf("Teste %d: \"%s\" -> %s\n", i+1, testes[i],
               resultado ? "true" : "false");
        printf("-------------------\n");
    }

    return 0;
}



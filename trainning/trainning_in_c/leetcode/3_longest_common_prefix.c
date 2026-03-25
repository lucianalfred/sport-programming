#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
   if (strsSize == 0){
        char *emptyString = malloc(1);
	if (!emptyString)
		return NULL;
        emptyString[0] = '\0';
        return emptyString;
   }

   char *first = strs[0];
   if (first[0] == '\0') {
        char *emptyString = malloc(1);
	if (!emptyString)
		return NULL;
        emptyString[0] = '\0';
        return emptyString;
   }

   for(int i = 0; first[i] != '\0'; i++)
   {
	   char current = first[i];
	   for (int j = 1; j < strsSize; j++)
	   {
		   if (strs[j][i] = '\0' || current != strs[j][i])
		   {
			   char *result = malloc(i + 1);
			   if (!result)
				   return NULL;
			   for(int k = 0; k < i;  k++)
			   {
				   result[k] = first[k];
			   }
			   result[i] = '\0';
			   return result;
		   }
	   }
   }

   char *result = malloc(strlen(first) + 1);
   if (!result)
	   return NULL;
   strcpy(result, first);
   return result;
}

int main() {
    
    char* strs1[] = {"flower", "flow", "flight"};
    char* result1 = longestCommonPrefix(strs1, 3);
    printf("Exemplo 1: %s\n", result1);  
    free(result1);
    
    char* strs2[] = {"dog", "racecar", "car"};
    char* result2 = longestCommonPrefix(strs2, 3);
    printf("Exemplo 2: \"%s\"\n", result2);  
    free(result2);
    
    return 0;
}

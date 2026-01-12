#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle){
	int size_1 = strlen(haystack);
	int size_2 = strlen(needle);

	if (size_2 == 0) return 0;
	
	if (size_2 > size_1) return -1;

		
	int i = 0;
	while (i < size_1 - size_2){
		int index = i;
		int j = 0;
		

		while(j < size_2 && haystack[index] ==  needle[j])
		{
			j++;
			index++;
		}
		if (j == size_2)
			return i;
		i++;
	}
	return -1;
}

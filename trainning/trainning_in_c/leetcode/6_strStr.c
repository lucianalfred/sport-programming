#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int hLen = strlen(haystack);
    int nLen = strlen(needle);
    
    if (nÇLen == 0) return 0;
    if (nLen > hLen) return -1;
    #include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int hLen = strlen(haystack);
    int nLen = strlen(needle);

    if (nLen == 0) return 0;
    if (nLen > hLen) return -1;

    for (int i = 0; i <= hLen - nLen; i++) {
        int j;
        for (j = 0; j < nLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == nLen) {
            return i;
        }
    }

    return -1;
}

    for (int i = 0; i <= hLen - nLen; i++) {
        int j;
        for (j = 0; j < nLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == nLen) {
            return i;
        }
    }
    
    return -1;
}


int main(void)
{
	char haystack[] = "javafx";
	char needle[] = "fx";

	int answer = strStr(haystack, needle);

	printf("%d\n", answer);

	return 0;
}

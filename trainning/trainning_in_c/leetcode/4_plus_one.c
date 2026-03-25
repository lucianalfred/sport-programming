#include <stdio.h>
#include <stdlib.h>


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    *returnSize = digitsSize + 1;
    int* result = malloc(sizeof(int) * (digitsSize + 1));
    if (!result) return NULL;
    
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    
    return result;
}

int main()
{
    int digits1[] = {1, 2, 3};
    int digits2[] = {4, 5, 6, 7};
    int digits3[] = {9, 9, 9};
    
    printf("%d\n", array_to_number(digits1, 3));  // 123
    printf("%d\n", array_to_number(digits2, 4));  // 4567
    printf("%d\n", array_to_number(digits3, 3));  // 999
    
    int returnSize;
    plusOne(digits1, 3, &returnSize);

    return 0;
}
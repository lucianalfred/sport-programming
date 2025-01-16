#include <stdio.h>

int search_seq(int *array, int number, int size){

    for(int i = 0; i < size; i++){
        if(array[i] == number){
            return (i);
        }
    }
    return (-1);
}

int search(int *array, int number, int size){
    
    int low, high, mid;

    low =0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high)/2;

        if (number < array[mid])
            high = mid - 1;
        else if(number > array[mid]){
            low = mid + 1;
        }
        else   
            return mid;

    }
    return (-1); //nao econtrado
    
}


int main(void)
{
    int array[] = {31,41,59,26,41,58};
    int size = 6;

    printf("%d\n",search_seq(array,41,size));
    printf("%d\n",search(array,41,size));

    return (0);
}
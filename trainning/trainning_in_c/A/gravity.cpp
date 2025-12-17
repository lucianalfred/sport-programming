// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int get_high(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    return (max);
}

int main(void)
{   
    int cols;
    cin >> cols;

    int * cubes_per_col = (int *) malloc(sizeof(int) * cols);
    if (!cubes_per_col)
    {
        cout << "memory error!";
        free(cubes_per_col);
        return (1);
    }

    for (int i = 0; i < cols; i++)
    {
        int value;
        cin >> value;
        cubes_per_col[i] = value;
    }

   int max = get_high(cubes_per_col, cols); 
   int **matrix = (int **)malloc(sizeof(int *) * max);
   if (!matrix)
   {
        cout << "memory error!";
        free(matrix);
        return (1);
   }

   for (int i = 0; i < max; i++)
   {
        matrix[i] = (int *) malloc(sizeof(int *) * cols);
        if (!matrix[i])
        {

            //free all
            free(matrix[i]);
        }
   }



    for(int i =0; i < max; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            //fill box cols
            matrix[i][j] = 1;
        }
    }

}
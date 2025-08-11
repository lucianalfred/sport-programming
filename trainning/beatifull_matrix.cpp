#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
	int matrix[5][5];

    int x, y;

    for(int i =0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int value;
            cin >> value;
            if (value == 1)
            {
                x = i;
                y = j;
            }
            matrix[i][j] = value;
        }
    }

    int mov = abs((2 - x)) + abs((2 - y));
    cout << mov << endl;
    
}

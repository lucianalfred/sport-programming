#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

int find_min_perimeter(long long A){
    long long  min_perimeter = LLONG_MAX;

    for(long long l = 1; l * l <= A; ++l){

        if(A % l == 0){
            long long w = A / l;
            long long perimeter = 2 * (l + w);

            min_perimeter = min(min_perimeter, perimeter);
        }
    }

    return min_perimeter;
}

int main(){
    long long A;
    cin >> A;

    cout << find_min_perimeter(A) << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a;

    cin >> a;
    long long b = LLONG_MAX;
    for(long long i = 1; i <= sqrt(a); i++){

        if(a % i == 0){
            long long l = i;
            long long w = a / i;
            long long c = 2 *(l+w);
            b = min(b,c); 
        } 
    }

    cout << b << endl;

    return 0;
}
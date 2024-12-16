#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
#include <math.h>
bool isprime(int n) {
    for (int i=2;i<=(sqrt((n)));i++){if(n%i==0)return false;
}
    if(n!=1) return true;else return false;
}
int main() {
     long long n;
     cin>>n;
    long long sum=0;
   for (int j=6;j<=n;j++){int co=0;for(int i=1;i<=sqrt((j));i++){if(j%i==0)if((j/i)==i)co+=isprime(i);else co+=isprime(i)+ isprime(j/i);};if(co==2){++sum;}} ;
cout<<sum;
     /*
     for (int i = 0; i < 11; ++i) {
         cout<<i<<" "<<isprime(i)<<endl;
     }
     */


}


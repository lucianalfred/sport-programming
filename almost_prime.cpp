#include <iostream>
#include <vector>

using namespace std;

int countAlmostPrimes(int n){

    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1]  = false;

    for(int i = 2; i * i <= n; i++){
        if(sieve[i]){
            for(int j = i * i; j <= n; j += i){
                sieve[j] = false;
            }
        }
    }

    vector<int> primes;
    for(int i = 2; i <= n; i++){
        if(sieve[i]){
            primes.push_back(i);
        }
    }

    int count = 0;
    int total_primes = primes.size();

    for(int i = 0; i < total_primes; i++){
        for(int j = i + 1; j < total_primes; j++){
            int product = primes[i] * primes[j];
            if(product <= n){
                count++;
            }else{
                break;
            }
        }
    }

    return count;
}

int main(){
    int n;
    cin >> n;
    cout << countAlmostPrimes(n) << endl;
    return 0;
}
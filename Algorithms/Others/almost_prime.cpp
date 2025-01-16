#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<bool> is_prime(n + 1, true); 
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i * i <= n; ++i){
        if(is_prime[i]){
            for(int j = i * i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }

    int almost_prime_count = 0;
    for (int i = 2; i <= n; i++){
        if (is_prime[i]){
            continue;
        }
        int num_prime_divisors = 0;
        int x = i;

        for(int j = 2; j * j <= x; ++j){
            if (x % j == 0 && is_prime[j]){
                num_prime_divisors++;

                while ( x % j == 0){
                    x /= j;
                }
            }
        }

        if ( x > 1 && is_prime[x]){
            num_prime_divisors++;
        }

        if (num_prime_divisors == 2){
            almost_prime_count++;
        }


    }

    cout << almost_prime_count << endl;

    return 0;
}
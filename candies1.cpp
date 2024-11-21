#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N; 

    cin >> N;
    vector <int> candies(N);

    for (int i = 0; i < N; ++i){
        cin >> candies[i];
    }

    int A, B;

    cin >> A >> B;

    vector <long long> prefix_sum(N + 1, 0);
    for (int i = 1; i <= N; ++i){
        prefix_sum[i] = prefix_sum[i - 1] + candies[i - 1];
    }

    long long result = prefix_sum[B +1 ] - prefix_sum[A];

    cout << result << endl;
    return (0);
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, A, B;
    long long count = 0;

    cin >> N;
    vector <int>C(N);
    for (int i = 0; i < N; i++){
        cin >> C[i];
    }

    cin >> A;
    cin >> B;

    for (int i = A; i <= B; i++){
        count += C[i];
    }

    cout << count;
    cout << endl;

    return (0);
}
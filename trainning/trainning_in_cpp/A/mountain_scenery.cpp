#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> r(2 * n + 1);

    for (int i = 0; i < 2 * n + 1; i++) {
        cin >> r[i];
    }

    vector<int> ans = r;
    int modified = 0;

    
    for (int i = 1; i < 2 * n; i += 2) {

    
        if (r[i] - 1 > r[i - 1] &&
            r[i] - 1 > r[i + 1] &&
            modified < k) {

            ans[i]--;
            modified++;
        }
    }

    for (int x : ans) {
        cout << x << ' ';
    }

    cout << '\n';

    return 0;
}
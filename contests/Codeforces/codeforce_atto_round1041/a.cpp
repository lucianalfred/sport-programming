#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_val(const vector<int>& arr) {
    return *min_element(arr.begin(), arr.end());
}

int max_val(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

int mex(const vector<int>& arr) {
    bool seen[105] = {false};
    for (int x : arr) {
        if (x >= 0 && x <= 100)
            seen[x] = true;
    }
    for (int i = 0; i <= 101; ++i) {
        if (!seen[i])
            return i;
    }
    return 102;
}

bool is_array_good(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i <= n - 3; ++i) {
        vector<int> sub = {a[i], a[i+1], a[i+2]};
        int mi = min_val(sub);
        int ma = max_val(sub);
        int mx = mex(sub);
        if (mx != (ma - mi))
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == -1)
                a[i] = 1;
        }
        if (is_array_good(a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

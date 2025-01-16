#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, L, a;
    cin >> n >> L >> a;

    vector<pair<int, int>> customers(n);
    for (int i = 0; i < n; i++) {
        cin >> customers[i].first >> customers[i].second;
    }

    int breaks = 0;
    int lastTime = 0;

   
    if (n > 0) {
        breaks += (customers[0].first - lastTime) / a;
        lastTime = customers[0].first + customers[0].second; 
    } else {
       
        breaks = L / a;
        cout << breaks << endl;
        return 0;
    }

   
    for (int i = 1; i < n; i++) {
        breaks += (customers[i].first - lastTime) / a;
        lastTime = customers[i].first + customers[i].second;
    }

    
    breaks += (L - lastTime) / a;

    cout << breaks << endl;

    return 0;
}

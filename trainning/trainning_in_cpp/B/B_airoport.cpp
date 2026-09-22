// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <queue>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> seats(m);
    for(int i = 0; i < m; i++){
        cin >> seats[i];
    }

    priority_queue<int> maxHeap;
    for(int s: seats){
        maxHeap.push(s);
    }

    long long maxMoney = 0;
    int remaining = n;

    while(remaining > 0){
        int x  = maxHeap.top();
        maxHeap.pop();
        maxMoney += x;

        if(x - 1 > 0){
            maxHeap.push(x - 1);
        }

        remaining--;
    }

    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int s: seats){
        minHeap.push(s);
    }

    long long minMoney = 0;
    remaining = n;
    while(remaining > 0){
        int x = minHeap.top();
        minHeap.pop();
        minMoney += x;
        if (x - 1 > 0){
            minHeap.push(x - 1);
        }
        remaining--;
    }

    cout << maxMoney << " " << minMoney << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    //cin >> tc;

    while(tc--){
        solve();
    }

    return 0;
}

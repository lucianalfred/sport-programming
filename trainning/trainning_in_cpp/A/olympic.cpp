#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> prog, math, sport;

    for(int i = 1; i <= n; i++) {
        int skill;
        cin >> skill;

        if (skill == 1)
            prog.push_back(i);
        else if (skill == 2)
            math.push_back(i);
        else
            sport.push_back(i);
    }

    int teams = min({prog.size(), math.size(), sport.size()});

    cout << teams << endl;

    for(int i = 0; i < teams; i++) {
        cout << prog[i] << " " << math[i] << " " << sport[i] << endl;
    }

    return 0;
}

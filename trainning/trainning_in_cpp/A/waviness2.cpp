#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    string s;

    long long dpCount[16][11][11][2][2];
    long long dpWaves[16][11][11][2][2];
    bool vis[16][11][11][2][2];
    
    bool isPeakOrValley(int a, int b, int c) {
        return (b > a && b > c) || (b < a && b < c);
    }
    
    void dfs(int pos, int prev2, int prev1, bool started, bool tight) {
        if (pos == s.length()) {
            dpCount[pos][prev2][prev1][started][tight] = 1;
            dpWaves[pos][prev2][prev1][started][tight] = 0;
            return;
        }
        
        if (vis[pos][prev2][prev1][started][tight]) return;
        vis[pos][prev2][prev1][started][tight] = true;
        
        int maxDigit = tight ? s[pos] - '0' : 9;
        long long count = 0, waves = 0;
        
        for (int dig = 0; dig <= maxDigit; dig++) {
            bool newTight = tight && (dig == maxDigit);
            
            if (!started && dig == 0) {
                dfs(pos + 1, prev2, prev1, false, newTight);
                count += dpCount[pos + 1][prev2][prev1][false][newTight];
                waves += dpWaves[pos + 1][prev2][prev1][false][newTight];
            } else {
                int newPrev2 = started ? prev1 : 10;
                int newPrev1 = dig;
                
                dfs(pos + 1, newPrev2, newPrev1, true, newTight);
                
                long long childCount = dpCount[pos + 1][newPrev2][newPrev1][true][newTight];
                long long childWaves = dpWaves[pos + 1][newPrev2][newPrev1][true][newTight];
                
                int extra = 0;
                if (started && prev2 != 10) {
                    if (isPeakOrValley(prev2, prev1, dig)) extra = 1;
                }
                
                count += childCount;
                waves += childWaves + childCount * extra;
            }
        }
        
        dpCount[pos][prev2][prev1][started][tight] = count;
        dpWaves[pos][prev2][prev1][started][tight] = waves;
    }
    
    long long solve(long long x) {
        if (x < 100) return 0;
        s = to_string(x);
        memset(vis, 0, sizeof(vis));
        dfs(0, 10, 10, false, true);
        return dpWaves[0][10][10][false][true];
    }
    
public:
    long long totalWaviness(long long num1, long long num2) {
        return solve(num2) - solve(num1 - 1);
    }
};
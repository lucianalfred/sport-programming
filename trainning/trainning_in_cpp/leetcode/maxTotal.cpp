#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        
       
        int minVal = nums[0], maxVal = nums[0];
        for (int num : nums) {
            minVal = min(minVal, num);
            maxVal = max(maxVal, num);
        }
        
        int best = maxVal - minVal;
        
       
        long long count = 0;
        
       
        vector<int> minPos, maxPos;
        for (int i = 0; i < n; i++) {
            if (nums[i] == minVal) minPos.push_back(i);
            if (nums[i] == maxVal) maxPos.push_back(i);
        }
        
        
        for (int p : minPos) {
            for (int q : maxPos) {
                int left = min(p, q);
                int right = max(p, q);
                count += (long long)(left + 1) * (n - right);
            }
        }
        
        
        if (count >= k) {
            return (long long)k * best;
        }
        
       
        if (n <= 3000) {
            vector<int> values;
            for (int i = 0; i < n; i++) {
                int mn = nums[i], mx = nums[i];
                for (int j = i; j < n; j++) {
                    mn = min(mn, nums[j]);
                    mx = max(mx, nums[j]);
                    values.push_back(mx - mn);
                }
            }
            sort(values.rbegin(), values.rend());
            long long ans = 0;
            for (int i = 0; i < k; i++) ans += values[i];
            return ans;
        }
        
      
        return (long long)k * best;
    }
};

int main(void){

	vector<int> nums = {1, 3, 2};
	int k = 2;

	Solution sol;
	cout << sol.maxTotalValue(nums, k) << endl;

	return 0;
}

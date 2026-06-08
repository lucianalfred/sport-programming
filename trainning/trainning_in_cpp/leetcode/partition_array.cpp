#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> answer, greater, less, equals;
	

	//greater, equals, less than pivot
	for(int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < pivot) less.push_back(nums[i]);
		else if (nums[i] == pivot) equals.push_back(nums[i]);
		else greater.push_back(nums[i]);
			
	}
	for(int i = 0;  i < less.size(); i++)
		answer.push_back(less[i]);
	for(int i = 0; i < equals.size(); i++)
		answer.push_back(equals[i]);
	for(int i = 0; i < greater.size(); i++)
		answer.push_back(greater[i]);

	return answer;
    }
};

int main(void)
{
	Solution sol;
	vector <int> arr = {9,12,5,10,14,3,10};

	vector<int> solved = sol.pivotArray(arr, 10);

	for(int i = 0; i < solved.size(); i++)
	{
		cout << solved[i] << " ";
	}

	cout << endl;
}

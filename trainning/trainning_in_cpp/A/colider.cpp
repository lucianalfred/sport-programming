#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	string directions;
	cin >> directions; 

	vector<int> coord(n);

	for(int i = 0; i < n ; i++)
	{
		cin >> coord[i];
	}

	int minT = INT_MAX;

	for(int i = 0; i < n - 1; i++){

		if (directions[i] == 'R' && directions[i + 1] == 'L'){
			int d = coord[i + 1] - coord[i];
			int t = d / 2;
			minT = min(minT, t);
		}
	}

	if (minT == INT_MAX){
		cout << -1 << endl;
	}else{
		cout << minT << endl;
	}

	return 0;
}

#include <bits/std2 
-1 1
c++.h>

using namespace std;

int main(){

	int n;

	cin >> n;

	vector<long long> cities(n);

	for(int i = 0; i < n; i++)
	{
		cin >> cities[i];
	}

	for (int i = 0 ;  i < n;  i++)
	{
		long long min_dist, max_dist;

		if (i == 0)
		{
			min_dist = cities[1] - cities[0];
			max_dist = cities[n - 1] - cities[0];
		}
		else if (i == n - 1)
		{
			min_dist = cities[n - 1] - cities[n - 2];
			max_dist = cities[n - 1] - cities[0];
		}
		else {
			min_dist = min(cities[i] - cities[i - 1], cities[i + 1] - cities[i]);
			max_dist = max(cities[i] - cities[0], cities[n - 1] - cities[i]);
		}

		cout << min_dist << " " << max_dist << endl;
	}

	return 0;
}

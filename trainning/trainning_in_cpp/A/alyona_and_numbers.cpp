#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n , m;

	cin >> n >> m;

	long long count = 0;

	for(int x = 1; x <= n;  x++)
	{
		int re = (5 - (x % 5)) % 5;

		if (re == 0)
			count += m / 5;
		else
			count += m / 5 + (m % 5 >= re ? 1 : 0);
	}

	cout << count << endl ;

	return 0;
}

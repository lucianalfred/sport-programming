#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int x;

	cin >> x;

	int answer = 0;

	while (x > 0)
	{
		answer += (x & 1);
		x >>= 1;
	}

	cout << answer << endl;

	return 0;
}

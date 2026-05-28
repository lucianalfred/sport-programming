#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long n;
	long long f;


	cin >> n;

	if (n % 2 == 0)
		f = n / 2;
	else
		f = -(n + 1) / 2;

	cout << f << endl;

}

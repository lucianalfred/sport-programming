#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	long long n, k;
	long long odds = 0;

	cin >> n >> k; 

	if (n % 2 == 0)
		odds = n / 2;
	else
		odds  = (n + 1) / 2;

	if (k <= odds)
		cout << (2 * k - 1) << endl;
	else
		cout << ( 2 * (k - odds)) << endl;
	return 0;
}

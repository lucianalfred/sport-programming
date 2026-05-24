#include <bits/stdc++.h>


using namespace std;

long long gcd(long long a, long long b)
{
	while (b){
		long long t = b;
		b  = a % b;
		a = t;
	}

	return a;
}

int main(void){

	long long l, r;

	cin >> l >> r;

	if (r - l < 2)
	{
		cout << -1 << endl;
		return 0;
	}

	for(long long a = l; a <= r - 2; a++)
	{
		for(long long b = a + 1; b <= r - 1; b++)
		{
			for(long long c  = b + 1; c <= r; c++)
			{
				if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) > 1){
					cout << a << " " << b << " " << c << endl;
					return 0;
				}
			}
		}
	}

	cout << -1 << endl;

}



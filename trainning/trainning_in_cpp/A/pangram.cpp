#include <bits/stdc++.h>


using namespace std;
int main()
{
	int n;
	string s;

	cin >> n >> s;

	for(char &c : s)
	{
		c = tolower(c);
	}

	set<char> letras(s.begin(), s.end());

	if (letras.size() == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
	int n;

	cin >> n;

	vector<pair<int,int>> laptops(n);

	// getting pair  laptop <price, quality>
	
	for(int i = 0; i < n; i++)
	{
		cin >> laptops[i].first >> laptops[i].second;
	}

	//sorting by price
	
	sort(laptops.begin(), laptops.end());

	//verify if exitsi two laptops that the quality price is low and have a hight quality than other with a high price and low quality
	
	for(int i = 1; i < n; i++)
	{
		if (laptops[i].second < laptops[i - 1].second){
			cout << "Happy Alex" << endl;
			return 0;
		}
	}

	cout << "Poor Alex" << endl;

	return 0;	
}

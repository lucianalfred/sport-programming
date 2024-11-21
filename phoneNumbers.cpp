#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;
    string digits;
    cin >> digits;

    int total8 = 0;
    for(char c: digits){
        if (c == '8'){
            total8++;
        }
    }

    if(n < 11){
        cout << 0 << endl;
        return (0);
    }

    int totalphonumbers = min(total8, n / 11);
    cout << totalphonumbers << endl;
    
    int peri = min(4,20);
    cout << peri << endl;
    return (0);
}
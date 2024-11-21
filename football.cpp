#include <iostream>
#include <string>

using namespace std;

int main(){

    string situation;
    cin >> situation;

    char current_char  = situation[0];
    int count = 1;

    for(int i = 1; i < situation.length(); ++i){
        if (situation[i] == current_char){
            count++;

            if (count >= 7){
                cout << "YES" << endl; 
                return (0);
            }
        }else{
            current_char = situation[i];
            count = 1;   
        }
    }
    
    cout << "NO" << endl;
    return (0);
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int char_to_number(char c){
    if(isdigit(c)){
        return c - 48;       
    }
    return (-1);
}

int main(){
    string operations;

    cin >> operations;
    
    vector<int> numbers;
    
    for(int i = 0; i < operations.length(); ++i){
        if(isdigit(operations[i])){
            numbers.push_back(char_to_number(operations[i]));
        } 
    }

    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size();  ++i){
        cout << numbers[i];
        if (i < numbers.size() - 1){
             cout << "+"; 
        }
        
    }
    cout << endl;
    return (0);
}
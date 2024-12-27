#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string shiftRight(string line){
    for(char &c: line){
        if(isalpha(c)){
            c+=3;
        }
    }
    return line;
}

string reverseString(string line){
    reverse(line.begin(), line.end());
    return line;
}

string shiftLeftFromMiddle(string line){
    int length = line.length();
    for(int i = length/2; i <length; ++i){
        line[i] =-1;
    }
    return line;
}

int main(){
    int N;
    cin >> N; 
    cin.ignore();

    vector<string> results;

    for(int i = 0; i < N; ++i){
        string line;
        getline(cin, line);

        line = shiftRight(line);

        line = reverseString(line);

        line = shiftLeftFromMiddle(line);

        results.push_back(line);
    }

    for(const string &result: results){
        cout << result << endl;
    }

    return 0;
}


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<string> words(n);

    for (int i = 0; i < n; ++i) {
        getline(cin, words[i]);
    }

    for (const auto& word : words) {
        if (word.length() > 10) {
            
            string ab = word[0] + to_string(word.length() - 2) + word.back();
            cout << ab << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}

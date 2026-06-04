#include <bits/stdc++.h>

using namespace std;

vector<int> returnDigits(int num){
    vector<int> digits ;

    while (num > 0){
        int digit  = num  % 10;
        digits.push_back(digit);
        num  = num  / 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

int peakOrValley(vector<int> digits)
{
    int vp = 0;
    for(int i = 1; i <= digits.size() - 2; i++){
        if ((digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) || (digits[i] < digits[i - 1] && digits[i] < digits[i + 1]))
            vp++;
    }

    return vp;
}
int totalWaviness(int num1, int num2) {
        

        
        
        int total = 0;

        for(int num = num1; num <= num2; num++){
            if (num >= 100){
                vector<int> digits = returnDigits(num);
                total += peakOrValley(digits);
            }
        }
        return total;      
}

int main(void)
{
    cout << totalWaviness(92, 161) << endl;
}

//solucao mais eficiente

#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:

    int getWaviness(int num){

        if (num < 100) return 0;

        int digits[6];
        int len = 0;

        while(num > 0){
            digits[len++] = num % 10;
            num /= 10;
        }

        //
        for(int i = 0; i < len / 2; i++){
            swap(digits[i], digits[len - 1 - i]);
        }

        int count = 0;

        for(int i = 1; i < len - 1; i++){
            if ((digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) || (digits[i] < digits[i - 1] && digits[i] < digits[i + 1])){
                count++;
            } 
        }

        return count;
    }

    int totalWaviness(int num1, int num2) {
        
        int total = 0;

        for(int num = num1; num <= num2; num++){
                total += getWaviness(num);
        }
        return total;      
    }

};
//
//  mrf461_hw8_q2.cpp
//  week8
//
//  Created by Matthew Femia on 5/29/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main() {
    
    string word;
    
    cout << "Please enter a word: ";
    cin >> word;
    
    // Test if word is palindrome + output proper statement
    bool palindromeTest = isPalindrome(word);
    
    if (palindromeTest == true) {
        cout << word << " is a palindrome" << endl;
    }
    else {
        cout << word << " is not a palindrome" << endl;
    }
    
    return 0;
}

bool isPalindrome(string str) {
    string reverse;
    
    // Iterate over chars of string in reverse and concatenate to 'reverse' word
    for (int position = (str.length() - 1); position >= 0; position--) {
        reverse += str[position];
    }
    if (reverse == str){
        return true;
    }
    else {
        return false;
    }
}

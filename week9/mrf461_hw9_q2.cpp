//
//  mrf461_hw9_q2.cpp
//  week9
//
//  Created by Matthew Femia on 6/2/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string textToLower(string str);
string alphabetize(string str);

int main(){
    string str1;
    string str2;
    
    cout << "Please enter two strings below" << endl;
    cout << "String #1: ";
    getline(cin, str1);
    cout << "String #2: ";
    getline(cin, str2);
    
    string newStr1 = alphabetize(str1);
    string newStr2 = alphabetize(str2);
    
    cout << newStr1 << " " << newStr2 << endl;
    
    if (str1 == str2){
        cout << str1 << " and " << str2 << " are anagrams!" << endl;
    }
    else {
        cout << str1 << " and " << str2 << " are NOT anagrams!" << endl;
    }
    return 0;
}

// Function to convert string to all lowercase
string textToLower(string str){
    string lowerCaseWord;
    
    for (int letter=0; letter < str.length(); letter++){
        if ((int(str[letter]) >= 65) && (int(str[letter]) <= 90)){
            lowerCaseWord = lowerCaseWord + char(int(str[letter]) + 32);
        }
        else {
            lowerCaseWord += str[letter];
        }
    }
    return lowerCaseWord;
}

string alphabetize(string str){
    str = textToLower(str);
    string newString = "";
    // Remove punctuation/line breaks
    for (int x = 0; x < str.length(); x++){
        if ((int(str[x]) >= 97) && (int(str[x]) <= 122)){
            newString = newString + str[x];
        }
    }
    
    // Alphabetize string
    for (int i = 0; i < newString.length(); i++){
        for(int j = (i + 1); j < newString.length(); j++){
            
            int temp;
            if (int(newString[i]) >= int(newString[j])) {
                temp = int(newString[j]);
                newString[j] = int(newString[i]);
                newString[i] = temp;
            }
        }
    }
    return newString;
}

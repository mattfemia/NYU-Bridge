//
//  mrf461_hw9_q1.cpp
//  week9
//
//  Created by Matthew Femia on 6/2/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string textToLower(string str);
int wordCounter(string str);
void letterCounter(string str);
string alphabetizeString(string str);
void outputLetterCount(string str);

int main(){
    string lineOfText;
    
    cout << "Please enter a line of text: " << endl;
    getline(cin, lineOfText);
    
    outputLetterCount(lineOfText);
    
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

// Function to count words
int wordCounter(string str){
    str = textToLower(str);
    
    int counter = 0;
    
    for (int letter = 0; letter < str.length(); letter++){
        int decimalLetter = int(str[letter]);
        
        // If position in string is a letter and previous position is letter, increment counter
        if (( (decimalLetter == 10) || (decimalLetter == 32) || (decimalLetter == 44) || (decimalLetter == 46) ) && (( ( ((int(str[letter - 1])) >= 65) || (int(str[letter - 1])) <= 90)) || ( ((int(str[letter - 1])) >= 97) || ( (int(str[letter - 1])) <= 122) ) )) {
            counter++;
        }
        // Account for strings that end with a word and not punctuation or space
        if (letter == (str.length() - 1) ){
            if ((( (((int(str[letter - 1])) >= 65) || (int(str[letter - 1])) <= 90)) || ( ((int(str[letter - 1])) >= 97) || ( (int(str[letter - 1])) <= 122) ))) {
                counter++;
            }
        }
    }
    return counter;
}

// Alphabetize letters in word
string alphabetizeString(string str){
    str = textToLower(str);
    for (int i = 0; i < str.length(); i++){
        for(int j = (i + 1); j < str.length(); j++){
            int temp;
            if (int(str[i]) >= int(str[j])){
                temp = int(str[j]);
                str[j] = int(str[i]);
                str[i] = temp;
            }
        }
    }
    return str;
}

// Function to count letters
void letterCounter(string str){
    str = alphabetizeString(str);
    int counter = 0;
    string word = "";
    
    // Create string containing the letters, but not any repeated letters, that make up string str
    for (int x = 0; x < str.length(); x++){
        if ((int(str[x]) != 10) && (int(str[x]) != 32) && (int(str[x]) != 44) && (int(str[x]) != 46)) {
            if (word.find(str[x]) == string::npos){
                word = word + str[x];
            }
        }
    }
    
    const int WORD_LENGTH = word.length();
    
    // Count number of instances and print out
    for (int i = 0; i < word.length(); i++){
        for (int j = 0; j <= str.length(); j++){
            if (word[i] == str[j]) {
                counter++;
            }
        }
        cout << word[i] << "    " << counter << endl;
        counter = 0;
    }
}

void outputLetterCount(string str) {
    
    int count = wordCounter(str);
    string word = "word";
    if (count >= 2){
        word = "words";
    }
    
    cout << count << "    " << word << endl;
    
    letterCounter(str);
}

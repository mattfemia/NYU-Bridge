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
int letterCounter(char letter);

int main(){
    string lineOfText;
    int wordCount;
    
    cout << "Please enter a line of text: " << endl;
    getline(cin, lineOfText);
    
    for (int x=0; x < lineOfText.length(); x++) {
    }
    
    // Convert to lowercase
    lineOfText = textToLower(lineOfText);
    wordCount = wordCounter(lineOfText);
    
    cout << lineOfText << endl << "Word Count = " << wordCount << endl;
}

// FUNCTIONS NEED TO WORK WITHIN ONE ANOTHER

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

// Function to alphabetize letters and remove punctuation + spaces

// Function to count letters
int letterCounter(char letter){
    int letterCount = 0;
    
    return letterCount;
}

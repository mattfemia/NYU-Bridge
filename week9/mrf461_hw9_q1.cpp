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
    string word = "";
    const int LENGTH = str.length();
    int alphabetized[LENGTH];
    
    
    
    
    //    for (int counter = 1; counter < LENGTH; counter++){
    //        int letter = int(str[counter]);
    //        for (int counter2 = (counter - 2); counter2 < LENGTH; counter2++) {
    //            int previousLetter = int(str[counter2]);
    //            if ((previousLetter == 10) || (previousLetter == 32) || (previousLetter == 44) || (previousLetter == 46) || (letter <= previousLetter)){
    //
    //                cout << "counter2 = " << counter2 << " " << char(alphabetized[counter2 - 1]) << " ";
    //                cout << "counter1 = " << counter << " " <<  char(alphabetized[counter - 1]) << endl;
    //                alphabetized[counter2] = str[counter];
    //                alphabetized[counter] = str[counter2];
    //                cout << "counter2 = " << counter2 << " " << char(alphabetized[counter2]) << " ";
    //                cout << "counter1 = " << counter << " " << char(alphabetized[counter]) << endl << endl;
    //
    //            }
    //            else{
    //                alphabetized[counter2] = str[counter2];
    //                alphabetized[counter] = str[counter];
    //            }
    //        }
    //    }
    for (int x = 0; x < LENGTH; x++){
        cout << alphabetized[x] << " ";
        if ( (int(alphabetized[x]) != 10) && (int(alphabetized[x]) != 32) && (int(alphabetized[x]) != 44) && (int(alphabetized[x]) != 46) ){
            word = word + char(alphabetized[x]);
        }
    }
    
    return word;
}

// Function to count letters
void letterCounter(string str){
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
    str = textToLower(str);
    
    int count = wordCounter(str);
    string word = "word";
    if (count >= 2){
        word = "words";
    }
    
    cout << count << "    " << word << endl;
    
    letterCounter(str);
}


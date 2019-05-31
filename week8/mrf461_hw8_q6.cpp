//
//  mrf461_hw8_q6.cpp
//  week8
//
//  Created by Matthew Femia on 5/29/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string scanWords(string phrase);

int main() {
    string textEntry;
    
    cout << "Please enter a line of text: " << endl;
    getline(cin, textEntry);
    
    cout << scanWords(textEntry) << endl;
    
    return 0;
    
}
string scanWords(string phrase) {
    string sequence;
    string word = "";
    int position = 0;
    
    for (int wordPosition = position; wordPosition <= phrase.length(); wordPosition++) {
        // End word if a space is reached + add word to new sequence
        if (int(phrase[wordPosition]) == 32) {
            
            // Add to final output 'sequence'
            sequence += (word + " ");
            
            // Reset word and increase position
            word = "";
            position = wordPosition + 1;
        }
        // Word starts with a letter --> numbers remain untouched
        else if ((int(phrase[position]) <= 48) || int((phrase[position]) >= 57)) {
            word += phrase[wordPosition];
        }
        // Word is a number --> change digits to x
        else if ((int(phrase[wordPosition]) >= 48) && (int(phrase[wordPosition]) <= 57)) {
            word += "x";
        }
        else {
            word += phrase[wordPosition];
        }
    }
    // Add last word to sequence
    sequence += word;
    return sequence;
}


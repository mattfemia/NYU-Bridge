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
    int position = 0;
    string word = "";
    for (int wordPosition = position; wordPosition <= phrase.length(); wordPosition++) {
        if (int(phrase[wordPosition]) == 32) {
            sequence += (word + " ");
            word = "";
            position = wordPosition + 1;
        }
        else if ((int(phrase[wordPosition]) >= 48) && (int(phrase[wordPosition]) <= 57)) {
            
            
            if (int(phrase[wordPosition - 1]) || int(phrase[wordPosition + 1]) == 32) {
                word += "x";
            }
            
            else {
                word += phrase[wordPosition];
            }
        }
        else {
            word += phrase[wordPosition];
        }
    }
    sequence += word;
    return sequence;
}


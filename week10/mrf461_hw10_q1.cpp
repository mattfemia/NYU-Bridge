//
//  mrf461_hw10_q1.cpp
//  week10
//
//  Created by Matthew Femia on 6/11/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){
    
    string sentence;
    int numberOfWords;
    
    cout << "Please enter a sentence: " << endl;
    getline(cin, sentence);
    
    string *wordArray = createWordsArray(sentence, numberOfWords);
    cout << "There are " << numberOfWords << " words in the input:" << endl;
    for (int x = 0; x < numberOfWords; x++){
        cout << "Word #" << x + 1 << " is " << wordArray[x] << endl;
    }
    return 0;
}


string* createWordsArray(string sentence, int& outWordsArrSize){
    vector<int> space_vector;
    int position = 0;
    
    // Create vector 'space_vector' with positions of spaces in the sentence
    while (sentence.find(" ", position) != string::npos){
        double space = sentence.find(" ", position);
        space_vector.push_back(space);
        position = space + 1;
    }
    
    int *array_position = &outWordsArrSize;
    int *wordArraySize = array_position;
    *wordArraySize = int(space_vector.size());
    
    const int SIZE = *wordArraySize;
    string *word;
    word = new string[SIZE];
    
    
    // Fill array based space_vector
    position = 0;
    for (int x = 0; x < SIZE; x++){
        word[x] = sentence.substr(position, (space_vector[x] - position));
        position = space_vector[x] + 1;
        
    }
    // Account for there being no space at the end of the input to get the final word
    double remaining = (sentence.length() - position);
    if (remaining > 0){
        word[SIZE] = sentence.substr(position, remaining);
        *wordArraySize = SIZE + 1;
    }
    
    return word;
}

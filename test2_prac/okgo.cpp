//
// Created by Matthew Femia on 2019-06-19.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string sentence;

    cout << "Please enter a sentence: " << endl;
    getline(cin, sentence);

    int letterH = sentence.find("h");

    cout << "There is a letter h at position " << letterH << endl;


    return 0;
}
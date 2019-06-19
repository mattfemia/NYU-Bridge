#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    string sentence;

    cout << "Please enter a sentence: " << endl;
    getline(cin, sentence);

    // Find spaces and delete double space;

    int found = sentence.find(" ");
    string sentenceCorrected = "";

    if (found == string::npos){
        return 0;
    }

    int cursor = 0;
    while (sentence.find(" ") != string::npos) {
        int nextFound = sentence.find(" ", found);
        if (nextFound - found == 1){
            sentenceCorrected = sentenceCorrected + sentence.(cursor, found);
            cursor = nextFound;
        }
        else {
            sentenceCorrected = sentenceCorrected + sentence.(cursor, found);
        }

    }


    cout << "First instance = " << found << endl;


    return 0;
}
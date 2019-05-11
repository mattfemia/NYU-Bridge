//
//  mrf461_hw5_q2.cpp
//
//
//  Created by Matthew Femia on 5/10/19.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int low = 1;
int high = 100;
int guesses = 5;
int currentGuess;

int main() {
    // Generate seed for random number
    srand(time(0));
    
    // Generate random number 'rand_num'
    int rand_num = (rand() % 100) + 1;
    
    cout<<"I thought of a number between 1 and 100! Try to guess it"<<endl;
    
    // Repeat guessing process until out of guesses
    while (guesses >= 1) {
        cout<<"Range ["<<low<<", "<<high<<"], Number of guesses left: "<<guesses<<endl;
        cout<<"Your guess: ";
        cin>>currentGuess;
        
        if (currentGuess == rand_num){
            cout<<"Congrats! You guessed my number in "<<5 - guesses<<" guesses."<<endl;
        }
        else {
            guesses--;
            if (guesses > 0) {
                if (currentGuess > rand_num){
                    cout<<"Wrong! My number is smaller."<<endl;
                    high = currentGuess;
                }
                else if (currentGuess < rand_num) {
                    cout<<"Wrong! My number is larger."<<endl;
                    low = currentGuess;
                }
            }
            else {
                cout<<"Out of guesses! My number is "<<rand_num<<endl;
            }
        }
    }
    
    return 0;
}



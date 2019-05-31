//
//  mrf461_hw8_q4.cpp
//  week8
//
//  Created by Matthew Femia on 5/29/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void randomPinSequence(int arr[], int arraySize);
bool pinValidation(int arr[], int actualPIN, int cipherPIN, int pinLength);

int main() {
    const int USER_PIN = 47526;
    const int PIN_COUNT = 10;
    const int PIN_LENGTH = 5;
    
    int pinArray[PIN_COUNT];
    int entry;
    
    cout << "Please enter your PIN according to the following mapping: " << endl;
    
    randomPinSequence(pinArray, PIN_COUNT);
    
    cin >> entry;
    
    // Check if entry matches user PIN
    if (pinValidation(pinArray, USER_PIN, entry, PIN_LENGTH) == true) {
        cout << "Your PIN is correct" << endl;
    }
    else {
        cout << "Your PIN is not correct" << endl;
    }
    
}

void randomPinSequence(int arr[], int arraySize) {
    // Output standard PIN sequence
    cout << "PIN:  ";
    for (int i = 0; i < arraySize; i++){
        cout << i << " ";
    }
    cout << endl << "NUM:  ";
    
    // Output cipher code sequence
    // Set seed for random number function
    srand(time(NULL));
    
    // Generate random numbers (1 - 3)
    for (int i = 0; i < arraySize; i++){
        arr[i] = rand() % 3 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool pinValidation(int arr[], int actualPIN, int cipherPIN, int pinLength) {
    int pinArray[pinLength];
    int cipherArray[pinLength];
    int position = 0;
    
    // Convert both the actual PIN and the submitted pin to array
    for (int i = pinLength - 1; i >= 0; i--) {
        int divisor = pow(10, i);
        pinArray[position] = actualPIN / divisor;
        cipherArray[position] = cipherPIN / divisor;
        
        actualPIN = actualPIN % divisor;
        cipherPIN = cipherPIN % divisor;
        position++;
    }
    
    // Compare the user's actual PIN to the cipher PIN they submitted
    int trueCount = 0;
    for (int i = 0; i < pinLength; i++) {
        if (arr[pinArray[i]] == cipherArray[i]) {
            trueCount++;
        }
    }
    
    // If every digit was correct --> PIN is correct
    if (trueCount == pinLength) {
        return true;
    }
    else {
        return false;
    }
}

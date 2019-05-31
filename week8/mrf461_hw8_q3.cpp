//
//  mrf461_hw8_q3.cpp
//  week8
//
//  Created by Matthew Femia on 5/29/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);

int main() {
    return 0;
}

void reverseArray(int arr[], int arrSize) {
    int temp;
    int forward = 0;
    
    for (int backward = arrSize - 1; backward >= (arrSize / 2); backward--) {
        temp = arr[forward];
        arr[forward] = arr[backward];
        arr[backward] = temp;
        forward++;
    }
}

void removeOdd(int arr[], int& arrSize) {
    for (int iterate = 0; iterate < arrSize; iterate++) {
        
        // Assign current number to variable
        int currentNum = arr[iterate];
        
        // if current number is odd --> replace it and reform sequence + decrease arrSize
        if (currentNum % 2 > 0) {
            for (int newNums = iterate; newNums <= arrSize; newNums++) {
                arr[newNums] = arr[newNums + 1];
            }
            arrSize--;
        }
    }
}

void splitParity(int arr[], int arrSize) {
    for (int currentPosition = 0; currentPosition < arrSize; currentPosition++) {
        
        // Rename number at current position for code readability
        int currentNum = arr[currentPosition];
        
        // Find position of current number in array
        if (currentNum % 2 > 0 && currentPosition > 0) {
            for (int currentPosition2 = currentPosition; currentPosition2 > 0; currentPosition2--) {
                
                // if preceding number is odd --> assign current numbers position to currentposition2
                if (arr[currentPosition2 - 1] % 2 > 0) {
                    arr[currentPosition2] = currentNum;
                    currentPosition2 = 0;
                }
                // else (even) --> currentNum comes before even number in sequence
                else {
                    arr[currentPosition2] = arr[currentPosition2 - 1];
                    arr[currentPosition2 - 1] = currentNum;
                }
            }
        }
    }
}

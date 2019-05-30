//
//  mrf461_hw8_q1.cpp
//  week8
//
//  Created by Matthew Femia on 5/29/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;


int minInArray(int arr[], int arrSize);
void scanArray(int minValue, int arr[]);

const int SIZE = 20;

int main() {
    
    int intArray[SIZE];
    int currentInteger;
    
    cout<<"Please enter 20 integers separated by a space: "<<endl;
    for (int iterate = 0; iterate < SIZE; iterate++){
        cin>>currentInteger;
        intArray[iterate] = currentInteger;
    }
    
    // Find minimum value in array of integers
    int minVal = minInArray(intArray, (SIZE - 1));
    
    cout<<"The minimum value is "<<minVal<<", and it is located in the following indices: ";
    
    // Compare array of integers to minimum value to find matches
    for (int i = 0; i < SIZE; i++) {
        if (intArray[i] == minVal) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
    
    return 0;
}

// Find minimum value in the array
int minInArray(int arr[], int arrSize) {
    int low = arr[0];
    for (int i = 1; i <= arrSize; i++)
        if (arr[i] < low) {
            low = arr[i];
        }
    return low;
}

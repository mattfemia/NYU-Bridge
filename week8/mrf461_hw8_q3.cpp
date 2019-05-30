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
    int arr1[10] = {9, 2, 14, 12, -3, 3};
    
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    
    reverseArray(arr1, 6);
    cout<<endl;
    
    removeOdd(arr2, arr2Size);
    cout<<endl;
    
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
    
    for (int iterate = 0; iterate < arrSize; iterate++) {
        cout<<arr[iterate]<<" ";
    }
    cout<<endl;
}

void removeOdd(int arr[], int& arrSize) {
    
    for (int iterate=0; iterate < arrSize; iterate++) {
        if (arr[iterate] % 2 != 0) {
            arrSize--;
            int newNums = iterate;
            for (newNums; newNums < arrSize; newNums++) {
                arr[iterate + 1] = arr[iterate];
            }
        }
    }
}

void splitParity(int arr[], int arrSize) {
    
}

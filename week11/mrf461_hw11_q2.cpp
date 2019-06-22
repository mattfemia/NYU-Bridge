//
//  mrf461_hw11_q2.cpp
//  week11
//
//  Created by Matthew Femia on 6/16/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

// a.)
int sumOfSquares(int arr[], int arrSize){
    if (arrSize > 0){
        return sumOfSquares(arr, (arrSize - 1)) + (pow(double(arr[arrSize - 1]), 2.0));
    }
    else {
        return 0;
    }
}

// b.)
bool isSorted(int arr[], int arrSize){
    if (arrSize > 0){
        bool value = isSorted(arr, (arrSize - 1));
        if (arr[arrSize] > value){
            return true;
        }
        else {
            return false;
        }
    }
    else if (arrSize == 0){
        bool following = arr[arrSize + 1];
        if (arr[arrSize] > following){
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return true;
    }
}

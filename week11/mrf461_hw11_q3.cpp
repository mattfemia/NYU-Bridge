//
//  mrf461_hw11_q3.cpp
//  week11
//
//  Created by Matthew Femia on 6/16/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int minInArray1(int arr[], int arrSize);

int main() {
    
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;
    res1 = minInArray1(arr, 9);
    //    res2 = minInArray2(arr, 0, 9);
    cout<<res1<<endl; //should both be -9
    //    res3 = minInArray2(arr, 2, 5);
    
    return 0;
    
    return 0;
}

int minInArray1(int arr[], int arrSize){
    int lowest = 0;
    if (arrSize > 0){
        int value = minInArray1(arr, (arrSize - 1));
        if (arr[arrSize] > value){
            lowest = value;
        }
        else {
            lowest = arr[arrSize];
        }
    }
    else if (arrSize == 0){
        int intAfterZero = arr[arrSize + 1];
        if (arr[arrSize] > intAfterZero){
            lowest = intAfterZero;
        }
        else {
            lowest = arr[arrSize];
        }
    }
    else {
        return 404;
    }
    return lowest;
}

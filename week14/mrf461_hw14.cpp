//
//  main.cpp
//  divide_and_conquer
//  hw14 assignment
//
//  Created by Matthew Femia on 7/19/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

// TODO: USE RECURSION

#include <iostream>
using namespace std;

void divideConquer(int array[], int sizeOfArray);

class SubArray{
    int maximum;
    int minimum;
}

int main() {
    
    const int SIZE = 3;
    int numArray[SIZE] = {1, 3, 2};
    
    SubArray arrayValues;
    int minVal;
    int maxVal;
    
    if (SIZE == 1){
        arrayValues.minimum = numArray[0];
        arrayValues.maximum = numArray[0];
        cout << "The minimum value = " << arrayValues.minimum << endl;
        cout << "The maximum value = " << arrayValues.maximum << endl;
    }
    else if (SIZE == 2){
        if (numArray[0] < numArray[1]){
            arrayValues.minimum = numArray[0];
            arrayValues.maximum = numArray[1];
        }
        else{
            arrayValues.minimum = numArray[1];
            arrayValues.maximum = numArray[0];
        }
        cout << "The minimum value = " << arrayValues.minimum << endl;
        cout << "The maximum value = " << arrayValues.maximum << endl;
    }
    else if (SIZE == 3){
        if (numArray[0] < numArray[1]){
            minVal = numArray[0];
            maxVal = numArray[1];
        }
        else{
            minVal = numArray[1];
            maxVal = numArray[0];
        }
        
        if (numArray[2] < minVal){
            minVal = numArray[2];
        }
        if (numArray[2] > maxVal){
            maxVal = numArray[2];
        }
    }
    else{
        divideConquer(numArray, SIZE);
    }
    return 0;
}

void divideConquer(int array[], int sizeOfArray){
    int mid;
    if (sizeOfArray % 2 == 0){
        mid = sizeOfArray / 2;
    }
    else{
        mid = (sizeOfArray + 1) / 2;
    }
    
    // Lower half of array
    int lowMin, lowMax;
    if (array[0] < array[1]){
        lowMin = array[0];
        lowMax = array[1];
    }
    else{
        lowMin = array[1];
        lowMax = array[0];
    }
    
    for (int i = 2; i < mid; i++){
        if (array[i] < lowMin){
            lowMin = array[i];
        }
        if (array[i] > lowMax){
            lowMax = array[i];
        }
    }
    
    // Greater half of array
    int highMin, highMax;
    if (array[mid] < array[mid + 1]){
        highMin = array[mid];
        highMax = array[mid + 1];
    }
    else{
        highMin = array[mid + 1];
        highMax = array[mid];
    }
    for (int i = (mid + 2); i < sizeOfArray; i++){
        if (array[i] < lowMax){
            highMin = array[i];
        }
        if (array[i] > highMax){
            highMax = array[i];
        }
    }
    
    // Compare minimums and maximums of both sides of array
    int minimum;
    int maximum;
    
    if (lowMin < highMin){
        minimum = lowMin;
    }
    else{
        minimum = highMin;
    }
    
    if (lowMax > highMax){
        maximum = lowMax;
    }
    else{
        maximum = highMax;
    }
    
    cout << "The minimum value = " << minimum << endl;
    cout << "The maximum value = " << maximum << endl;
}


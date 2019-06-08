//
//  mrf461_hw9_q3.cpp
//  week9
//
//  Created by Matthew Femia on 6/2/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
void getPosNums2(int* arr, int arrSize, int*& outPossArr, int& outPosArrSize);

int main(){
    
    const int FRED = 5;
    int frick = 9;
    int *example = new int[FRED];
    
    example[0] = 2;
    example[1] = -3;
    example[2] = -5;
    example[3] = 43;
    example[4] = 23;
    
    int outPosArrSize = frick;
    
    int *newArray = getPosNums1(example, FRED, outPosArrSize);
    cout << outPosArrSize << endl;
    for (int i = 0; i < outPosArrSize; i++){
        cout << *newArray + i << " ";
    }
    return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){
    int counter = 0;
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            counter++;
        }
    }
    int* positive_nums = new int[counter];
    
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            positive_nums[x] = arr[x];
        }
    }
    outPosArrSize = counter;
    
    return positive_nums;
}

void getPosNums2(int* arr, int arrSize, int*& outPossArr, int& outPosArrSize){
    int counter = 0;
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            counter++;
        }
    }
    int* positive_nums = new int[counter];
    
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            positive_nums[x] = arr[x];
        }
    }
    outPosArrSize = counter;
    outPossArr = positive_nums;
}

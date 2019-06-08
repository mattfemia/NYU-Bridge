//
//  mrf461_hw9_q3.cpp
//  week9
//
//  Created by Matthew Femia on 6/2/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
void getPosNums2(int* arr, int arrSize, int*& outPossArr, int& outPosArrSize);
int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main(){
    
    const int integer = 5;
    int outputSizeExample = 5;
    int *example = new int[integer];
    
    example[0] = 2;
    example[1] = -3;
    example[2] = -5;
    example[3] = 43;
    example[4] = 23;
    
    int outPosArrSize = outputSizeExample;
    int *newArray = new int[outPosArrSize];
    
    // getPosNums1
    cout << "getPosNums1 implementation: " << endl;
    newArray = getPosNums1(example, integer, outPosArrSize);
    cout << outPosArrSize << endl;
    for (int i = 0; i < outPosArrSize; i++){
        cout << *(newArray + i)<< " ";
    }
    cout << endl << endl;
    
    
    // getPosNums2
    int *exampleTwoArray = new int[integer];
    
    cout << "getPosNums2 implementation: " << endl;
    getPosNums2(example, integer, exampleTwoArray, outPosArrSize);
    cout << outPosArrSize << endl;
    for (int i = 0; i < outPosArrSize; i++){
        cout << *(exampleTwoArray + i)<< " ";
    }
    cout << endl << endl;
    
    
    // getPosNums3
    int outputSizeExample2 = 5;
    int *example2 = new int[integer];
    
    example[0] = 2;
    example[1] = -3;
    example[2] = -5;
    example[3] = 43;
    example[4] = 23;
    
    int* outPosArrSizePtr = NULL;
    outPosArrSizePtr = &outputSizeExample2;
    
    cout << "getPosNums3 implementation: " << endl;
    newArray = getPosNums3(example2, integer, outPosArrSizePtr);
    cout << *outPosArrSizePtr << endl;
    for (int i = 0; i < *outPosArrSizePtr; i++){
        cout << *(newArray + i)<< " ";
    }
    cout << endl << endl;
    
    
    
    // getPosNums4
    int outputSizeExample3 = 5;
    int *example3 = new int[integer];
    
    example[0] = 2;
    example[1] = -3;
    example[2] = -5;
    example[3] = 43;
    example[4] = 23;
    int *exampleFourArray = new int[integer];
    int* outPosArrSizePtr2 = NULL;
    outPosArrSizePtr2 = &outputSizeExample3;
    
    newArray = getPosNums4(example3, integer, exampleFourArray, outPosArrSizePtr2);
    cout << *outPosArrSizePtr2 << endl;
    for (int i = 0; i < *outPosArrSizePtr2; i++){
        cout << *(newArray + i)<< " ";
    }
    cout << endl << endl;
    
    return 0;
}


int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){
    int counter = 0;
    vector<int> temp;
    
    // Add positive nums to vector
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            counter++;
            temp.push_back(arr[x]);
        }
    }
    
    int* positive_nums = new int[counter];
    
    // Iterate temp and add to new array
    for (int x = 0; x < temp.size(); x++){
        if (temp[x] > 0){
            positive_nums[x] = temp[x];
        }
    }
    outPosArrSize = counter;
    
    return positive_nums;
}

void getPosNums2(int* arr, int arrSize, int*& outPossArr, int& outPosArrSize){
    int counter = 0;
    vector<int> temp;
    
    // Add positive nums to vector
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            counter++;
            temp.push_back(arr[x]);
        }
    }
    
    int* positive_nums = new int[counter];
    
    // Iterate temp and add to new array
    for (int x = 0; x < temp.size(); x++){
        if (temp[x] > 0){
            positive_nums[x] = temp[x];
        }
    }
    outPosArrSize = counter;
    
    delete [] arr;
    outPossArr = positive_nums;
}

int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr){
    int counter = 0;
    vector<int> temp;
    
    // Add positive nums to vector
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            counter++;
            temp.push_back(arr[x]);
        }
    }
    
    int* positive_nums = new int[counter];
    
    // Iterate temp and add to new array
    for (int x = 0; x < temp.size(); x++){
        if (temp[x] > 0){
            positive_nums[x] = temp[x];
        }
    }
    *outPosArrSizePtr = counter;
    
    return positive_nums;
}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr){
    int counter = 0;
    vector<int> temp;
    
    // Add positive nums to vector
    for (int x = 0; x < arrSize; x++){
        if (arr[x] > 0){
            counter++;
            temp.push_back(arr[x]);
        }
    }
    
    int* positive_nums = new int[counter];
    
    // Iterate temp and add to new array
    for (int x = 0; x < temp.size(); x++){
        if (temp[x] > 0){
            positive_nums[x] = temp[x];
        }
    }
    *outPosArrSizePtr = counter;
    
    delete [] arr;
    *outPosArrPtr = positive_nums;
}

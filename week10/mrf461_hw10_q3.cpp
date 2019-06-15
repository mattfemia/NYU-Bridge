//
//  mrf461_hw10_q3.cpp
//  week10
//
//  Created by Matthew Femia on 6/11/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void withoutVector();
void withVector();

int main(){
    
    withVector();
    
    return 0;
}

void withoutVector(){
    
}

void withVector(){
    vector<int> numList;
    int number;
    
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1." << endl;
    cin >> number;
    
    while (number != -1){
        numList.push_back(number);
        cin >> number;
    }
    
    int search;
    cout << "Please enter the number you want to search." << endl;
    cin >> search;
    
    const int SIZE = int(numList.size());
    int positionsArray[SIZE];
    int numOfPositions = 0;
    for (int x = 0; x <= SIZE; x++){
        if (numList[x] == search){
            positionsArray[numOfPositions] = x + 1;
            numOfPositions++;
        }
    }
    cout << search << " shows in lines ";
    for (int i = 0; i < numOfPositions; i++){
        cout << positionsArray[i] << " ";
    }
    cout << endl;
}
